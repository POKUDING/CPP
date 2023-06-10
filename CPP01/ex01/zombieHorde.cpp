/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:15:49 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/10 17:37:33 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name )
{
	std::stringstream	stream;
	Zombie	*rtn = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		stream.str("");
		stream << i;
		rtn[i].setName(name + stream.str());
	}
	return rtn;
}

#endif