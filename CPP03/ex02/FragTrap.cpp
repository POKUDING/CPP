/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:40:18 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/18 19:25:15 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "UNKNOWN";
	this->_hitpoint = 100;
	this->_energypoint = 100;
	this->_attackdamage = 30;
	std::cout << "FragTrap " << _name << ": created" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitpoint = 100;
	this->_energypoint = 100;
	this->_attackdamage = 30;
	std::cout << "FragTrap " << _name << ": created" << std::endl;
}

FragTrap::FragTrap(FragTrap& src)
{
	this->_name = src._name;
	this->_hitpoint = src._hitpoint;
	this->_energypoint = src._energypoint;
	this->_attackdamage = src._attackdamage;
		std::cout << "FragTrap " << _name << ": copy created" << std::endl;
}

FragTrap& FragTrap::operator = (FragTrap& src)
{
	this->_name = src._name;
	this->_hitpoint = src._hitpoint;
	this->_energypoint = src._energypoint;
	this->_attackdamage = src._attackdamage;
	std::cout << "FragTrap " << _name << ": copyed" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << ": destroy" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (!_energypoint)
	{
		std::cout << "FragTrap " << _name << " has no energy" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << std::endl;
	this->_energypoint--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " : High Five!! " << std::endl;
}