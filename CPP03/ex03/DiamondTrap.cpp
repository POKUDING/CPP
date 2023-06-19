/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:53:16 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 15:28:50 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_name = ClapTrap::_name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_attackdamage = FragTrap::_attackdamage;
	this->_energypoint = 50;
	this->_hitpoint = FragTrap::_hitpoint;
	std::cout << "DiamondTrap " << _name << ": created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_attackdamage = FragTrap::_attackdamage;
	this->_energypoint = 50;
	this->_hitpoint = FragTrap::_hitpoint;
	std::cout << "DiamondTrap " << _name << ": created" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& src)
{
	this->_name = src._name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_attackdamage = src._attackdamage;
	this->_energypoint = src._energypoint;
	this->_hitpoint = src._hitpoint;
	std::cout << "ClapTrap " << _name << ": copy created" << std::endl;
}

DiamondTrap&	DiamondTrap::operator = (DiamondTrap& src)
{
	this->_name = src._name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_attackdamage = src._attackdamage;
	this->_energypoint = src._energypoint;
	this->_hitpoint = src._hitpoint;
	std::cout << "ClapTrap " << _name << ": copyed" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << ": destroy" << std::endl;	
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void 	DiamondTrap::whoAmI(void)
{
	std::cout << "my name is " << _name << ". my ClapTrap name is " << ClapTrap::_name << std::endl;
}