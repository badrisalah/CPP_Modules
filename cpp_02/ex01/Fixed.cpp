/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:32:56 by sabadri           #+#    #+#             */
/*   Updated: 2025/11/24 22:36:44 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return this->_fixedPointValue;	
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}