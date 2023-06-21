/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:32:59 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/21 19:06:47 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_store[i] = NULL;
}


MateriaSource::MateriaSource(const MateriaSource& src)
{
	for(int	i = 0; i < 4; i++)
	{
		if(src._store[i] != NULL)
			this->_store[i] = src._store[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator = (const MateriaSource& src)
{
	for(int	i = 0; i < 4; i++)
	{
		if(src._store[i] != NULL)
			this->_store[i] = src._store[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for(int	i = 0; i < 4; i++)
		delete this->_store[i];
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	for(int	i = 0; i < 4; i++)
	{
		if(_store[i] == NULL)
		{
			_store[i] = materia;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for(int	i = 0; i < 4; i++)
	{
		if (_store[i] && _store[i]->getType() == type)
			return (_store[i]);
	}
	return (NULL);
}