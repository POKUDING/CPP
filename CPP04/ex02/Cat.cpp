/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:44:21 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 18:00:08 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat consturctor called" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& src) : Animal(src)
{
	std::cout << "Cat copy consturctor called" << std::endl;
	this->_type = src.getType();
	this->brain = new Brain(*src.brain);
}

Cat&	Cat::operator = (const Cat& src)
{
	std::cout << "Cat copy operator called" << std::endl;
	this->_type = src.getType();
	this->brain = src.brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat : mewaooo" << std::endl;
}

void	Cat::inputIdea(std::string idea)
{
	brain->inputIdea(idea);
}

void	Cat::printIdeas(void) const
{
	brain->printIdeas();
}