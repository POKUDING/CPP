/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:54:54 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/18 15:36:37 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("Scav a");
	ScavTrap b("Scav b");
	ScavTrap c("Scav c");
	ClapTrap *p;

	a.attack("Scav b");
	b.takeDamage(20);
	b.beRepaired(10);
	c = b;
	c.gaurdGate();
	p = new ScavTrap(a);
	delete p;
	return 0;
}