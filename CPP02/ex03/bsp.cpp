/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 00:18:04 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/15 00:59:24 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area( Point const a, Point const b, Point const c)
{
	Fixed	rtn;

	rtn = ((a.getx() * b.gety()) + (b.getx() * c.gety()) + (c.getx() * a.gety())) - \
		((b.getx() * a.gety()) + (c.getx() * b.gety()) + (a.getx() * c.getx()));
	if(rtn.getRawBits() < 0)
		rtn.setRawBits(rtn.getRawBits() * -1);
	return (rtn);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	tmp_abc, tmp_abp, tmp_bcp, tmp_cpa = 0;

	tmp_abc = area(a, b, c);
	tmp_abp = area(a, b, point);
	tmp_bcp = area(b, c, point);
	tmp_cpa = area(c, point, a);
	if(tmp_abc == 0)
	{
		std::cout <<"abc is not triangle" << std::endl;
		return (false);
	}
	if(tmp_abp == 0 || tmp_bcp == 0 || tmp_cpa == 0 || tmp_abp + tmp_bcp + tmp_cpa != tmp_abc)
		return	(false);
	return (true);
}