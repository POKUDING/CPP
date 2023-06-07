/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:29:38 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/07 20:16:23 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
		
		std::string	mygetline();
		void		addcontact(int index);
		void		searchcontact();
		void		printindex();
		void		printcontact(int index);

	public:
		PhoneBook();
		int		runphonebook();
};

#endif