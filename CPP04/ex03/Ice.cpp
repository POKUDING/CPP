/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:53:12 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/21 18:52:44 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(const Ice& src) : AMateria(src)
{
	this->type = src.type;
}

Ice& Ice::operator = (const Ice& src)
{
	this->type = src.type;
	return (*this);
}

Ice::~Ice() {}

AMateria* Ice::clone(void) const
{
	AMateria	*rtn;

	rtn = new Ice(*this);
	return (rtn);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}