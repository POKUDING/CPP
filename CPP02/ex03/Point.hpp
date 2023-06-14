/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:49:47 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/15 01:01:01 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(const Fixed& x, const Fixed& y);
	Point(const Point& src);
	Point& operator = (const Point &src);
	~Point();

	const Fixed	getx(void) const;
	const Fixed gety(void) const;
};

#endif