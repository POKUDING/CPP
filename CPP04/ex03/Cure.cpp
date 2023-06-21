/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:26:37 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/21 18:52:27 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure& src) : AMateria(src)
{
	this->type = src.type;
}

Cure& Cure::operator = (const Cure& src)
{
	this->type = src.type;
	return (*this);
}

Cure::~Cure() {}

AMateria* Cure::clone(void) const
{
	AMateria	*rtn;

	rtn = new Cure();
	return (rtn);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "Cure: \"* heals " << target.getName() << "’s wounds *\"" << std::endl;
}