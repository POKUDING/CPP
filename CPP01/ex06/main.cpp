/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:16:06 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/11 14:41:20 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
		std::cout << "check argv" <<std::endl;
	else
		harl.harlFilter(av[1]);
	return (0);
}