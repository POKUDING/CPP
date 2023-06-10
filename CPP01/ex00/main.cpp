/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:04:41 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/10 16:12:16 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int	main(void)
{
	Zombie	*zb;

	zb = newZombie("newzb");
	zb->announce();
	randomChump("randomzb");
	delete zb;
	return (0);
}