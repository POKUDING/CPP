/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:27:06 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/14 20:40:58 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return (out);	
}

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const int value)
{
		this->value = value << this->point;
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * (1 << this->point));
}

Fixed::Fixed(const Fixed& src)
{
	this->value = src.getRawBits();
}

Fixed& Fixed::operator = (const Fixed& src)
{
	if (this == &src)
		return (*this);
	this->value = src.getRawBits();
	return (*this);
}

Fixed::~Fixed() {}

int Fixed::getRawBits( void ) const
{
	return this->value;
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << 8));
}

int Fixed::toInt( void ) const
{
	return (this->getRawBits() / (1 << 8));
}

bool	Fixed::operator > (const Fixed& src) const
{
	return (this->getRawBits() > src.getRawBits());
}

bool	Fixed::operator < (const Fixed& src) const
{
	return (this->getRawBits() < src.getRawBits());
}

bool	Fixed::operator >= (const Fixed& src) const
{
	return (this->getRawBits() >= src.getRawBits());
}

bool	Fixed::operator <= (const Fixed& src) const
{
	return (this->getRawBits() <= src.getRawBits());
}

bool	Fixed::operator == (const Fixed& src) const
{
	return (this->getRawBits() == src.getRawBits());
}

bool	Fixed::operator != (const Fixed& src) const
{
	return (this->getRawBits() != src.getRawBits());
}


Fixed	Fixed::operator + (const Fixed& src)
{
	Fixed	rtn(this->toFloat() + src.toFloat());
	return (rtn);
}

Fixed	Fixed::operator - (const Fixed& src)
{
	Fixed	rtn(this->toFloat() - src.toFloat());
	return (rtn);
}

Fixed	Fixed::operator * (const Fixed&  src)
{
	Fixed	rtn(this->toFloat() * src.toFloat());
	return (rtn);
}

Fixed	Fixed::operator / (const Fixed& src)
{
	Fixed	rtn(this->toFloat() / src.toFloat());
	return (rtn);
}

Fixed&	Fixed::operator ++ ()
{
	this->value++;
	return (*this);
}

const Fixed	Fixed::operator ++ (int)
{
	Fixed const	tmp(*this);
	
	this->value++;
	return (tmp);
}

Fixed&	Fixed::operator -- ()
{
	this->value--;
	return (*this);
}

const Fixed	Fixed::operator -- (int)
{
	Fixed const	tmp(*this);
	
	this->value--;
	return (tmp);
}

Fixed&			Fixed::min(Fixed& src1, Fixed& src2)
{
	if (src1 > src2)
		return (src2);
	return (src1);
}

const Fixed&	Fixed::min(const Fixed& src1, const Fixed& src2)
{
	if (src1 > src2)
		return (src2);
	return (src1);
}

Fixed&			Fixed::max(Fixed& src1, Fixed& src2)
{
	if (src1 < src2)
		return (src2);
	return (src1);
}

const Fixed&	Fixed::max(const Fixed& src1, const Fixed& src2)
{
	if (src1 < src2)
		return (src2);
	return (src1);
}
