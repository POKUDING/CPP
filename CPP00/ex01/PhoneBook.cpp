/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:48:27 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/09 15:23:55 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {}

std::string	PhoneBook::mygetline()
{
	std::string	rtn;

	std::getline(std::cin, rtn);
	if (std::cin.eof())
		exit (1);
	return rtn;
}

void	PhoneBook::addcontact(int index)
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	darkestscret;
	std::string	phonenum;

	std::cout << "firstname : " << std::endl;
	firstname = mygetline();
	std::cout << "lastname : " << std::endl;
	lastname = mygetline();
	std::cout << "nickname : " << std::endl;
	nickname = mygetline();
	std::cout << "darkestscret : " << std::endl;
	darkestscret = mygetline();
	std::cout << "phonenum : " << std::endl;
	phonenum = mygetline();
	if (firstname.empty() || lastname.empty() || nickname.empty() || darkestscret.empty() || phonenum.empty())
	{
		std::cout << "can't save empty field" << std::endl;
		return ;
	}
	this->contacts[index].setfirstname(firstname);
	this->contacts[index].setlastname(lastname);
	this->contacts[index].setnickname(nickname);
	this->contacts[index].setdarkestscret(darkestscret);
	this->contacts[index].setphonenum(phonenum);
	this->index = ++index % 8;
}

void	PhoneBook::searchcontact()
{
	int	i;
	std::string tmp;

	while (1)
	{
		i = 0;
		std::cout << "input index num" << std::endl;
		if ((std::cin >> i) && (i >= 1 && i <= 8))
			break ;
		else if (std::cin.eof())
			exit (1);
		std::cout << "Wrong index num" << std::endl;
		std::cin.clear();
		std::cin.ignore(1164, '\n');
	}
	std::cin.ignore(1164, '\n');
	this->printcontact(i - 1);
}

void	PhoneBook::printindex(void)
{
	std::cout << std::setw(10);
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "firstname" << "|" << std::setw(10) << "lastname" << "|" << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << this->contacts[i].indexfirstname() \
		<< "|" << std::setw(10) << this->contacts[i].indexlastname() \
		<< "|" << std::setw(10) << this->contacts[i].indexnickname() << std::endl;
	}
}

void	PhoneBook::printcontact(int index)
{
	std::cout << "firstname : " << this->contacts[index].getfirstname() << std::endl;
	std::cout << "lastname : " << this->contacts[index].getlastname() << std::endl;
	std::cout << "nickname : " << this->contacts[index].getnickname() << std::endl;
	std::cout << "darkestscret : " << this->contacts[index].getdarkestscret() << std::endl;
	std::cout << "phonenum : " << this->contacts[index].getphonenum() << std::endl;
}

int	PhoneBook::runphonebook(void)
{
	std::string	tmp;

	while(1)
	{
		std::cout << "SELECT OPTION\n" << "'ADD' 'SEARCH' 'EXIT'" << std::endl;
		tmp = mygetline();
		if (tmp == "ADD")
			this->addcontact(this->index);
		else if (tmp == "SEARCH")
		{
			this->printindex();
			this->searchcontact();
		}
		else if (tmp == "EXIT")
			return (0);
		else
			std::cout << "CHECK OPTION" << std::endl;
	}
}