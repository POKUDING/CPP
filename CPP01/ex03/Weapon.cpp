/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:05:22 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/10 18:30:52 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type) : type(type) {}
Weapon::~Weapon()
{
	std::cout << this->type << " destroyed" << std::endl;
}

const std::string &Weapon::getType()
{
	std::string	&rtn = this->type;

	return rtn;
}

void Weapon::setType(const	std::string type)
{
	this->type = type;
}