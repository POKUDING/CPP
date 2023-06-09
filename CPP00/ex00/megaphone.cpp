/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:43:45 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/09 15:22:30 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	converter(std::string av)
{
	for(int i = 0; i < av.length(); i++)
		av[i] = std::toupper(av[i]);
	return (av);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(*++av)
		std::cout << converter(*av);
	std::cout << std::endl;
	return (0);
}
