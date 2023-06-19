/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:54:54 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 15:57:37 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap 	a("Trap a");
	ClapTrap	b;
	ClapTrap	c("Trap c");
	ClapTrap	d("Trap d");

	for (int i = 0; i < 11; i++)
	{
		a.attack("Trap c");
		c.takeDamage(0);
		c.beRepaired(0);
	}
	b = d;
	b.attack("Trap a");
	b.takeDamage(UINT32_MAX);
	b.beRepaired(10);
	b.beRepaired(UINT32_MAX);
}