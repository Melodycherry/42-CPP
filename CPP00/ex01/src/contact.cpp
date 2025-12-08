/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:29:05 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/08 22:51:32 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(){
	return;
}

Contact::~Contact(){
	return;
}

void	Contact::setFirstName(const std::string &fname){
	this->firstName = fname;
}

void	Contact::setLastName(const std::string &lname){
	this->lastName = lname;
}

void	Contact::setNickName(const std::string &nname){
	this->nickName = nname;
}

void	Contact::setPhoneNumber(const std::string &pnumber){
	this->phoneNumber = pnumber;
}

void	Contact::setDarkestSecret(const std::string &dsecret){
	this->darkestSecret = dsecret;
}

std::string Contact::getFirstName() const{
	return this->firstName;
}

std::string Contact::getLastName() const{
	return this->lastName;
}

std::string Contact::getNickName() const{
	return this->nickName;
}

std::string Contact::getPhoneNumber() const{
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret() const{
	return this->darkestSecret;
}
