/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:39:44 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/21 19:15:23 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character()
{
	for(int i = 0; i < 4; i++)
		_inven[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for(int i = 0; i < 4; i++)
	_inven[i] = NULL;
}

Character::Character(const Character& src)
{
	this->_name = src._name;
	for(int	i = 0; i < 4; i++)
	{
		if(src._inven[i] != NULL)
			this->_inven[i] = src._inven[i];
	}
}

Character&	Character::operator = (const Character& src)
{
	this->_name = src._name;
	for(int	i = 0; i < 4; i++)
	{
		if(src._inven[i] != NULL)
			this->_inven[i] = src._inven[i];
	}
	return (*this);
}

Character::~Character() {}

std::string const & Character::getName(void) const
{
	return(this->_name);
}

void	Character::equip(AMateria* m)
{
	for(int	i = 0; i < 4; i++)
	{
		if (this->_inven[i] == NULL)
		{
			this->_inven[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	this->_inven[idx] = NULL;
}


void Character::use(int idx, ICharacter& target)
{
	if (idx >=0 && idx <= 3 && this->_inven[idx] != NULL)
		this->_inven[idx]->use(target);
}