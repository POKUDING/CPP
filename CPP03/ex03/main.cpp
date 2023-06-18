/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:54:54 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/18 21:09:10 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("Diamond a");

	a.whoAmI();
	a.attack("air");
	std::cout << "\n----------------\n" << std::endl;
	DiamondTrap	b("Diamond b");
	b.attack("Diamond a");
	a.takeDamage(30);
	a.beRepaired(30);
	std::cout << "\n----------------\n" << std::endl;
	DiamondTrap c = b;
	c.whoAmI();
}