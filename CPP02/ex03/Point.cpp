/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:49:45 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/15 01:01:36 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0)) {}
Point::Point(const Fixed& x, const Fixed& y) : x(x), y(y) {}
Point::~Point() {}
Point::Point(const Point& src) : x(Fixed(src.x)), y(Fixed(src.y)) {}
Point& Point::operator = (const Point &src)
{
	(void)src;
	std::cout << "Point x,y is constant" << std::endl;
	return (*this);
}

const Fixed Point::getx(void) const
{
	return (x);	
}

const Fixed Point::gety(void) const
{
	return (y);
}