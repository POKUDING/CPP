/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:33:12 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 20:42:56 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& src)
{
	this->type = src.type;
}

AMateria& AMateria::operator = (const AMateria &src)
{
	this->type = src.type;
	return(*this);
}

AMateria::~AMateria() {}

const std::string&	AMateria::getType(void) const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << "hit by" << type << std::endl;
}