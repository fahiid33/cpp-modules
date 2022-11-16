/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:31:37 by fstitou           #+#    #+#             */
/*   Updated: 2022/11/16 01:13:41 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "contact.hpp"
#include <iostream>

class Phonebook
{
    private:
    Contact contacts[8];
    public:
    void	set_details(int i);
    void	display_contacts(int i);
	int		is_strdigit(std::string& str);
};  



#endif