/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:54:54 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/18 19:16:06 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("Frag a");
	FragTrap	b("Frag b");

	a.attack("Frag b");
	b.takeDamage(30);
	b.beRepaired(15);
	b.highFivesGuys();
	return 0;
}