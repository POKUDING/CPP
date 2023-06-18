/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:00:39 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/18 19:27:26 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	this->_name = "UNKNOWN";
	this->_hitpoint = 100;
	this->_energypoint = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap " << _name << ": created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitpoint = 100;
	this->_energypoint = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap " << _name << ": created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	this->_name = src._name;
	this->_hitpoint = src._hitpoint;
	this->_energypoint = src._energypoint;
	this->_attackdamage = src._attackdamage;
	std::cout << "ScavTrap " << _name << ": copyed" << std::endl;
}

ScavTrap&	ScavTrap::operator = (const ScavTrap& src)
{
	this->_name = src._name;
	this->_hitpoint = src._hitpoint;
	this->_energypoint = src._energypoint;
	this->_attackdamage = src._attackdamage;
	std::cout << "ScavTrap " << _name << ": copyed by operator = " << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << ": destroyed" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!_energypoint)
	{
		std::cout << "ScavTrap " << _name << " has no energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << std::endl;
	this->_energypoint--;
}

void	ScavTrap::gaurdGate() const
{
	std::cout << _name << " is now in Gatekeeper mode." << std::endl;
}