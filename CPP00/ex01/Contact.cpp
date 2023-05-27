/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:27:08 by junhyupa          #+#    #+#             */
/*   Updated: 2023/05/27 20:57:55 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string firstname)
{
	this->firstname = firstname;
}

void	Contact::setLastName(std::string lastname)
{
	this->firstname = lastname;
}

void	Contact::setNickName(std::string nickname)
{
	this->firstname = nickname;
}

void	Contact::setDarkestScret(std::string darkestscret)
{
	this->firstname = darkestscret;
}

std::string	Contact::getFirstName(void)
{
	return	this->firstname;
}

std::string	Contact::getLastName(void)
{
	return	this->lastname;
}

std::string	Contact::getNickName(void)
{
	return	this->nickname;
}

std::string	Contact::getDarkestScret(void)
{
	return	this->darkestscret;
}

int	Contact::getPhonenum(void)
{
	return	this->phonenum;
}
