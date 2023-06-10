/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:46:55 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/10 16:56:49 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_ptr;
	std::string &str_ref = str;

	str_ptr = &str;
	std::cout << "The memory address of the string variable : " << &str << std::endl;
	std::cout << "The memory address held by stringPTR : " << str_ptr << std::endl;
	std::cout << "The memory address held by stringREF : " << &str_ref << std::endl;

	std::cout << "The value of the string variable : " << str << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *str_ptr << std::endl;
	std::cout << "The value pointed to by stringREF : " << str_ref << std::endl;
	return (0);
}