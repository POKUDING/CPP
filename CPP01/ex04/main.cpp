/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:38:05 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/11 15:26:30 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Replace.hpp"

int	main(int ac, char **av)
{

	if (ac == 4)
	{
		Replace	rp(av[1], av[2], av[3]);
		return (rp.replacing());
	}
	std::cout << "check argc" << std::endl;
	return (1);
}