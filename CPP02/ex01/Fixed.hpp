/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:26:09 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/15 16:30:28 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int	value;
	static const int	point = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& src);
	Fixed& operator = (const Fixed& src);
	~Fixed();

	int 	getRawBits( void ) const;
	void 	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &src);

#endif