/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:36:13 by junhyupa          #+#    #+#             */
/*   Updated: 2023/05/27 20:59:01 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	Contact con("jk");

	con.setfirstname("hello");
	std::cout << con.getfirstname() <<  std::endl;
}