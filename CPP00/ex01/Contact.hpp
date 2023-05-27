/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:30:21 by junhyupa          #+#    #+#             */
/*   Updated: 2023/05/27 21:00:43 by junhyupa         ###   ########.fr       */
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
	int			phonenum;
	
public:
	Contact(/* args */);
	~Contact();
	void	setFirstName(std::string firstname);
	void	setLastName(std::string lastname);
	void	setNickName(std::string nickname);
	void	setDarkestScret(std::string darkestscret);
	
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getDarkestScret(void);
	int			getPhonenum(void);
};

#endif