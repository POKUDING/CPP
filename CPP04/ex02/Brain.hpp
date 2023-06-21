/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyupa <junhyupa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:47:01 by junhyupa          #+#    #+#             */
/*   Updated: 2023/06/19 17:31:32 by junhyupa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
private:
	std::string	ideas[100];
	int	index;
public:
	Brain();
	Brain(const Brain& src);
	Brain&	operator = (const Brain& src);
	~Brain();

	void	inputIdea(const std::string& idea);
	void	printIdeas(void) const;
};

#endif