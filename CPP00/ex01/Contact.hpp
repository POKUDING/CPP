/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:30:21 by junhyupa          #+#    #+#             */
/*   Updated: 2023/05/31 18:59:21 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	darkestscret;
	std::string	phonenum;
	
public:
	Contact();
	Contact(std::string firstname, std::string lastname, std::string nickname, std::string darkestscret, std::string phonenum);
	
	void	setfirstname(std::string firstname);
	void	setlastname(std::string lastname);
	void	setnickname(std::string nickname);
	void	setdarkestscret(std::string darkestscret);
	void	setphonenum(std::string phonenum);
	
	std::string	getfirstname(void);
	std::string	getlastname(void);
	std::string	getnickname(void);
	std::string	getdarkestscret(void);
	std::string	getphonenum(void);
};

#endif