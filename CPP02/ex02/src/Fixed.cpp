/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:51:17 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/29 08:16:51 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <cmath>

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Fixed::Fixed() : _value(0){
}

Fixed::Fixed(const int intValue){
	_value = intValue << _fractionalBits; 
}

Fixed::Fixed(const float floatValue){
	_value = roundf(floatValue * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& copy){
	_value = copy._value;
}

Fixed& Fixed::operator=(const Fixed& copy){
	if (this != &copy){
		_value = copy._value;
	}
	return *this;
}

Fixed::~Fixed(){
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

int Fixed::getRawBits(void) const{
    return _value;
}

void Fixed::setRawBits(int const raw){
    _value = raw;
}

float Fixed::toFloat( void ) const{
	return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const{
	return _value >> _fractionalBits; 
}
	
/* *************************************************** */
/*  Comparison operators                               */
/* *************************************************** */
 
bool Fixed::operator>(const Fixed& other) const {
	return _value > other._value;
}

bool Fixed::operator<(const Fixed& other) const {
	return _value < other._value;
}

bool Fixed::operator>=(const Fixed& other) const {
	return _value >= other._value;
}

bool Fixed::operator<=(const Fixed& other) const {
	return _value <= other._value;
}

bool Fixed::operator==(const Fixed& other) const {
	return _value == other._value;
}

bool Fixed::operator!=(const Fixed& other) const {
	return _value != other._value;
}

// Comparaison de l'objet courant (valeur interne de l'objet) avec other
// a > b est equivalent a a.operator>(b)
// On redefini le comportement de > pour les objets fixed, car 
// sans ca le compilateur ne sait pas comparer 2 "Fixed"
// & car pas de copie inutile, et const car on modifie rien
// Const a la fin car modifie pas l'objet courant et aussi
// permet d'appeler l'operateur sur des objets const

/* *************************************************** */
/*  Arithmetic operators                               */
/* *************************************************** */

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed result;
	result.setRawBits(_value + other._value);
	return (result);
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed result;
	result.setRawBits(_value - other._value);
	return (result);
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed result;
	result.setRawBits((_value * other._value) >> _fractionalBits);
	return (result);
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed result;
	result.setRawBits((_value << _fractionalBits) / other._value);
	return (result);
}

// Ici on retourne un nouvel objet
// Fixed c = a + b
// On produit une nouvelle valeur mais on modif ni a ni b 
// Donc ici on a les deux valeur ( _value et other._value)
// Une addition des deux et on met cette valeur ds result avec setRawbits

/* *************************************************** */
/* Increment / decrement operators                     */
/* *************************************************** */
 
// Pre incrementation ( retourne par reference )
Fixed& Fixed::operator++() {
	_value++;
	return *this;		// On incremente l'objet et on le retourne lui meme 
}

// Post incrementation ( retourne par valeur )
Fixed Fixed::operator++(int) {
	Fixed temp(*this);  // sauvegarde valeur actuelle
	_value++;			// incrémentation
	return temp; 		// retourne l'ancienne valeur
}

Fixed& Fixed::operator--() {
	_value--;
	return *this;		// On incremente l'objet et on le retourne lui meme 
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);  // sauvegarde valeur actuelle
	_value--;			// décrémentation
	return temp; 		// retourne l'ancienne valeur
}

// Le int est juste un "marqueur" pour differencier a++ de ++a ( pas utilisé)
// ++a  → modifie → retourne NOUVELLE valeur
// a++  → sauvegarde → modifie → retourne ANCIENNE valeur

// Reference car on ne peut retourner une référence QUE vers un objet qui existe encore après la fonction
// Pour la pre incr a est incr, a existe tjrs, et on retourne a
// donc reference OK

// POur la post, on doit donner l'ancienne valeur, puis incr a
// mais ancienne valeur n'existe plus dans a
// donc creation d'un objet temporaire 
// pas de ref car valeur retournee n'existe plus apres la fonction

/* *************************************************** */
/* Static min / max functions                          */
/* *************************************************** */
 
Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if ( a < b )
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if ( a < b )
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if ( a > b )
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if ( a > b )
		return a;
	else
		return b;
}

// Ici on compare 2 fixed, on retourne plus grd ou petit
// On ne cree pas de nouvel objet et retourne une reference
// On ne renvoie pas une copie mais l'objet original

// 2 Versions car si pas const on autorise la modif de l'objet retourné
// et ici < > ... fonctionnent car on les a defini avant 

/* *************************************************** */
/* Overload of the insertion operator                  */
/* *************************************************** */
 
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

// Memo pre et post incrementation :
// Post incrementation retourne ce que l'objet etait avant l'incrementation
// Pre incrementation retourne l'objet apres l'incrementation
// ce aue l'objet etait -> copie temporaire
// ce que l'objet est maintenant -> reference
// DONC :
// La pré-incrémentation retourne une référence car elle renvoie l’objet modifié lui-même
// tandis que la post-incrémentation doit retourner une copie de l’ancienne valeur
// sinon elle serait équivalente à la pré-incrémentation et on risque de retourner une référence vers un temporaire.

