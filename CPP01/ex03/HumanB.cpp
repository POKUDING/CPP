/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:25:14 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/10 18:33:30 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}
HumanB::~HumanB()
{
	std::cout << "B human " << this->name << " dead" << std::endl;
}

void	HumanB::attack( void )
{
	std::string	wp_type;

	if (!this->weapon)
		wp_type = "Nothing";
	else
		wp_type = this->weapon->getType();
	std::cout << this->name << " attacks with their " << wp_type << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}