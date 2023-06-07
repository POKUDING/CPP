/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:27:08 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/07 20:09:18 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : firstname("empty"), lastname(""), nickname(""), darkestscret(""), phonenum("") {}


Contact::Contact(std::string firstname, std::string lastname, std::string nickname, std::string darkestscret, std::string phonenum)
: firstname(firstname), lastname(lastname), nickname(nickname), darkestscret(darkestscret), phonenum(phonenum) {}

void	Contact::setfirstname(std::string firstname)
{
	this->firstname = firstname;
}

void	Contact::setlastname(std::string lastname)
{
	this->lastname = lastname;
}

void	Contact::setnickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::setdarkestscret(std::string darkestscret)
{
	this->darkestscret = darkestscret;
}

void	Contact::setphonenum(std::string phonenum)
{
	this->phonenum = phonenum;
}

std::string	Contact::getfirstname(void)
{
	return	this->firstname;
}

std::string	Contact::getlastname(void)
{
	return	this->lastname;
}

std::string	Contact::getnickname(void)
{
	return	this->nickname;
}

std::string	Contact::getdarkestscret(void)
{
	return	this->darkestscret;
}

std::string	Contact::getphonenum(void)
{
	return	this->phonenum;
}

std::string	Contact::indexfirstname(void)
{
	std::string	tmp;

	tmp = this->firstname;
	if (tmp.length() > 10)
	{
		tmp.resize(10);
		tmp.replace(9, 1, ".");
	}
	return tmp;
}

std::string	Contact::indexlastname(void)
{
	std::string	tmp;

	tmp = this->lastname;
	if (tmp.length() > 10)
	{
		tmp.resize(10);
		tmp.replace(9, 1, ".");
	}
	return tmp;
}

std::string	Contact::indexnickname(void)
{
	std::string	tmp;

	tmp = this->nickname;
	if (tmp.length() > 10)
	{
		tmp.resize(10);
		tmp.replace(9, 1, ".");
	}
	return tmp;
}