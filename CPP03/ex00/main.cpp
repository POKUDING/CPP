/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:54:54 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/18 19:28:53 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap 	a("Trap a");
	ClapTrap	b;
	ClapTrap	c("Trap c");

	for (int i = 0; i < 11; i++)
	{
		a.attack("Trap c");
		c.takeDamage(0);
		c.beRepaired(0);
	}
	b = c;
	b.attack("Trap a");
}