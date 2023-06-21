/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:14:07 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 17:58:58 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal consturctor called" << std::endl;
}


Animal::Animal(const Animal& src)
{
	std::cout << "Animal copy consturctor called" << std::endl;
	this->_type = src.getType();
}

Animal& Animal::operator = (const Animal& src)
{
	std::cout << "Animal copy operator called" << std::endl;
	this->_type = src.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "something animal sound" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}