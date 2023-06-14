/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:26:09 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/15 00:39:20 by junhyupa         ###   ########.fr       */
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
	float	 toFloat( void ) const;
	int 	toInt( void ) const;
	bool	operator > (const Fixed& src) const;
	bool	operator < (const Fixed& src) const;
	bool	operator >= (const Fixed& src) const;
	bool	operator <= (const Fixed& src) const;
	bool	operator == (const Fixed& src) const;
	bool	operator != (const Fixed& src) const;
	Fixed	operator + (const Fixed&src) const;
	Fixed	operator - (const Fixed& src) const;
	Fixed	operator * (const Fixed& src) const;
	Fixed	operator / (const Fixed& src) const;
	Fixed&			operator ++ ();
	const Fixed	operator ++ (int);
	Fixed&			operator -- ();
	const Fixed	operator -- (int);
	static Fixed&			min(Fixed& src1, Fixed& src2);
	static const Fixed&	min(const Fixed& src1, const Fixed& src2);
	static Fixed&			max(Fixed& src1, Fixed& src2);
	static const Fixed&	max(const Fixed& src1, const Fixed& src2);
};

std::ostream& operator<<(std::ostream &out, const Fixed &src);

#endif