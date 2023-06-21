/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:51:46 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/21 18:07:37 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
	Ice();
	Ice(const Ice& src);
	Ice&	operator = (const Ice& src);
	~Ice();

	AMateria*	clone(void) const;
	void		use(ICharacter& target);
};

#endif