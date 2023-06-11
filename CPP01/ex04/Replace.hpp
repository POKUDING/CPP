/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:06:50 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/11 15:27:43 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replace
{
private:
	std::string		av[3];
	std::ifstream	infile_s;
	std::ofstream	outfile_s;

	int	check_len();
	int	open_file();
public:
	Replace(std::string infile, std::string erase, std::string insert);
	~Replace();
	int	replacing();
};

#endif