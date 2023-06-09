/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:04:41 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/14 19:18:13 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie	*zb;

	zb = zombieHorde(10, "horde zombie");
	for(int	i = 0; i < 10; i++)
	{
		zb[i].announce();
	}
	delete[] zb;
}