/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:54:49 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 15:58:04 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "UNKNOWN";
	this->_hitpoint = 10;
	this->_energypoint = 10;
	this->_attackdamage = 0;
	std::cout << "ClapTrap " << _name << ": created" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name)
{
	this->_hitpoint = 10;
	this->_energypoint = 10;
	this->_attackdamage = 0;
	std::cout << "ClapTrap " << _name << ": created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	this->_name = src._name;
	this->_hitpoint = src._hitpoint;
	this->_energypoint = src._energypoint;
	this->_attackdamage = src._attackdamage;
	std::cout << "ClapTrap " << _name << ": copy created" << std::endl;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap& src)
{
	this->_name = src._name;
	this->_hitpoint = src._hitpoint;
	this->_energypoint = src._energypoint;
	this->_attackdamage = src._attackdamage;
	std::cout << "ClapTrap " << _name << ": copyed" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << ": destroy" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!_energypoint)
	{
		std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << std::endl;
	this->_energypoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int	tmp;

	tmp = this->_hitpoint;
	std::cout << _name << " attacked, taked " << amount << " damage" << std::endl;
	this->_hitpoint -= amount;
	if (_hitpoint < 0 || tmp < this->_hitpoint)
		this->_hitpoint = 0;
	std::cout << _name << " left " << _hitpoint << " hitpoint" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int	tmp;

	if (!_energypoint)
	{
		std::cout << _name << " has no energy" << std::endl;
		return ;
	}
	tmp = this->_hitpoint;
	this->_hitpoint += amount;
	if (this->_hitpoint < tmp)
		this->_hitpoint = INT_MAX;
	std::cout << _name << " repairs " << (this->_hitpoint - tmp) << " points!" << std::endl;
	std::cout << _name << " left " << _hitpoint << " hitpoint" << std::endl;
	this->_energypoint--;
}