/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:38:05 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/10 18:43:06 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string	av[3];
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc != 4)
	{
		std::cout << "check argv" << std::endl;
		return (1);
	}
	av[0] = argv[1];
	av[1] = argv[2];
	av[2] = argv[3];
	if (!av[0].length() || !av[1].length() || 1av[2].length)
	{
		std::cout << "check argv" << std::endl;
		return (1);
	}
}