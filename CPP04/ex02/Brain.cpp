/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:46:54 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 17:59:56 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	index = 0;
}

Brain::Brain(const Brain& src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	this->index = src.index;
}

Brain&	Brain::operator = (const Brain& src)
{
	std::cout << "Brain copy operator called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	this->index = src.index;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::inputIdea(const std::string& idea)
{
	ideas[index++] = idea;
	index = index % 100;
}

void	Brain::printIdeas(void) const
{
	for(int i = 0; i <100; i++)
		std::cout << "idea " << i << ": " << ideas[i] << std::endl;
}