/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:46:23 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 17:46:36 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}
	{
		std::cout << "\n-----------------------\n" << std::endl;
		Dog* i = new Dog();
		for(int idx = 0; idx < 50; idx++)
			i->inputIdea("idea");
		Dog* j = new Dog(*i);
		
		j->printIdeas();
		delete i;
		delete j;
		
	}
	{
		Animal	*animals[10];
		for(int i = 0; i < 5; i++)
			animals[i] = new Dog();
		for(int i = 5; i < 10; i++)
			animals[i] = new Cat();
		for(int	i = 0; i < 10; i++)
			std::cout << animals[i]->getType() << std::endl;
		for(int	i = 0; i < 10; i++)
			delete animals[i];
	}
	return 0;
}