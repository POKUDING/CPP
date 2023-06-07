/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:48:27 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/01 14:40:01 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::addcontact(int index)
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	darkestscret;
	std::string	phonenum;

	std::cout << "firstname : " << std::endl;
	getline(std::cin, firstname);
	std::cout << "lastname : " << std::endl;
	getline(std::cin, lastname);
	std::cout << "nickname : " << std::endl;
	getline(std::cin, nickname);
	std::cout << "darkestscret : " << std::endl;
	getline(std::cin, darkestscret);
	std::cout << "phonenum : " << std::endl;
	getline(std::cin, phonenum);
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

	while (1)
	{
		i = 0;
		std::cout << "input index num" << std::endl;
		std::cin >> i;
		std::cin.ignore(1164, '\n');
		if (std::cin.fail() || (i < 1 || i > 8))
			std::cout << "Wrong index num" << std::endl;
		else
			break ;
		std::cin.clear();
	}
	this->printcontact(i - 1);
}

void	PhoneBook::printindex(void)
{
	std::cout << std::setw(10);
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "firstname" << "|" << std::setw(10) << "lastname" << "|" << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << this->contacts[i].getfirstname() \
		<< "|" << std::setw(10) << this->contacts[i].getlastname() \
		<< "|" << std::setw(10) << this->contacts[i].getnickname() << std::endl;
	}
}

void	PhoneBook::printcontact(int index)
{
	std::cout << "firstname : " << this->contacts[index].getfirstname() << std::endl;
	std::cout << "lastname : " << this->contacts[index].getlastname() << std::endl;
	std::cout << "nickname : " << this->contacts[index].getnickname() << std::endl;
	std::cout << "phonenum : " << this->contacts[index].getphonenum() << std::endl;
}

int	PhoneBook::runphonebook(void)
{
	std::string	tmp;
	int	rtn;

	rtn = 0;
	while(1)
	{
		std::cout << "SELECT OPTION\n" << "'ADD' 'SEARCH' 'EXIT'" << std::endl;
		getline(std::cin, tmp);
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
		if (rtn)
			return (rtn);
	}
	return (0);
}