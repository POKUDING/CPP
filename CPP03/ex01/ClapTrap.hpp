/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:54:52 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/18 15:37:14 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int			_hitpoint;
	int			_energypoint;
	int			_attackdamage;

public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap& src);
	ClapTrap&	operator = (const ClapTrap& src);
	virtual ~ClapTrap();

	virtual void attack(const std::string& target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
};


#endif