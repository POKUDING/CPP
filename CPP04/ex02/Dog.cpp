/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:44:21 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 18:00:19 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog consturctor called" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& src) : Animal(src)
{
	std::cout << "Dog copy consturctor called" << std::endl;
	this->_type = src.getType();
	this->brain = new Brain(*src.brain);
}

Dog&	Dog::operator = (const Dog& src)
{
	std::cout << "Dog copy operator called" << std::endl;
	this->_type = src.getType();
	this->brain = src.brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog : bark! bark!" << std::endl;
}


void	Dog::inputIdea(std::string idea)
{
	brain->inputIdea(idea);
}

void	Dog::printIdeas(void) const
{
	brain->printIdeas();
}