/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:43:45 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/08 18:51:41 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

char	*ToUpper(char *c)
{
	int	i;

	i = -1;
	while (c && c[++i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] += 'A' - 'a';
	}
	return (c);
}

int	main(int ac, char **av)
{
	std::string st(av[1]);
	
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(*++av)
	{	
		std::cout << st.ToUpper();
	}
	std::cout << std::endl;
	return (0);
}