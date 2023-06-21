/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:46:23 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 18:01:25 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *a = new Cat();
	a->makeSound();
	delete a;

	//this code dosen't work
	// Animal *b = new Animal();
	// b->makeSound();
	// delete b;

	return 0;
}