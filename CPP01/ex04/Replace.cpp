/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:06:38 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/11 15:51:09 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"


Replace::Replace(std::string infile, std::string erase, std::string insert)
{
	this->av[0] = infile;
	this->av[1] = erase;
	this->av[2] = insert;
}

Replace::~Replace() {}

int Replace::open_file()
{
	std::string	tmp;

	tmp = av[0] + ".replace";
	infile_s.open(av[0].c_str());
	outfile_s.open(tmp.c_str());
	if(!infile_s.is_open() || !outfile_s.is_open())
	{
		std::cout << "open error" << std::endl;
		return (1);
	}
	return (0);
}

int	Replace::check_len()
{
	if (!av[0].length() || !av[1].length() || !av[2].length())
	{
		std::cout << "check argv" << std::endl;
		return (1);
	}
	return (0);
}

int	Replace::replacing()
{
	std::string	tmp;
	size_t		pos;

	if (check_len() || open_file())
		return (1);
	while(1)
	{
		pos = 0;
		getline(infile_s, tmp);
		while(1)
		{
			pos = tmp.find(av[1], pos);
			if (pos == std::string::npos)
				break ;
			tmp.erase(pos, av[1].length());
			tmp.insert(pos, av[2]);
			pos += av[2].length();
		}
		outfile_s.write(tmp.c_str(), tmp.length());
		if(infile_s.eof())
			break ;
		else(outfile_s.write("\n", 1));
	}
	return (0);
}
