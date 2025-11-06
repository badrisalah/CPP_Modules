/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:39:01 by sabadri           #+#    #+#             */
/*   Updated: 2025/11/06 09:52:19 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& other) : _fixedPointValue(other._fixedPointValue){
	std::cout<<"Copy constructor called"<<std::endl;
}

Fixed& Fixed::operator= (const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_fixedPointValue = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(){
	std::cout<<"Destructoe called"<<std::endl;
}
int Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return this->_fixedPointValue;	
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}