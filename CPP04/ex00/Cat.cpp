/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:44:21 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 17:59:08 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat consturctor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& src) : Animal(src)
{
	std::cout << "Cat copy consturctor called" << std::endl;
	this->_type = src.getType();
}

Cat&	Cat::operator = (const Cat& src)
{
	std::cout << "Cat copy operator called" << std::endl;
	this->_type = src.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat : mewaooo" << std::endl;
}