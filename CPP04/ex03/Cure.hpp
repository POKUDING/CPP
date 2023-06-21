/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:24:47 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/21 18:39:09 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
	Cure();
	Cure(const Cure& src);
	Cure&	operator = (const Cure& src);
	~Cure();

	AMateria*	clone(void) const; 
	void		use(ICharacter& target);
};

#endif