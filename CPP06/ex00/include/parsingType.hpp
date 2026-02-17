/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsingType.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 08:38:51 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/13 10:49:39 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSINGTYPE_HPP
#define PARSINGTYPE_HPP

#include <string>

enum LiteralType {
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INVALID
};

LiteralType detectType(const std::string& str);


#endif