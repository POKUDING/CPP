/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:42:24 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 12:42:23 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap& src);
	FragTrap& operator = (FragTrap& src);
	virtual ~FragTrap();

	void	attack(const std::string& target);
	void	highFivesGuys(void);
};

#endif