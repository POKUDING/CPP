/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:43:07 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/15 01:03:15 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// Point	pa(Fixed(3), Fixed(0));
	// Point	pb(Fixed(0), Fixed(3));
	// Point	pc(Fixed(0), Fixed(0));
	// Point	pp(Fixed(1), Fixed(1));
	// std::cout << pa.getx() << pa.gety() << std::endl;
	// if(bsp(pa, pb, pc, pp))
	// 	std::cout << "true" << std::endl;
	// else
	// 	std::cout << "false" << std::endl;
	return 0;
}