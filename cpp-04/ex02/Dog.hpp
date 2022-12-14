/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:16:17 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/19 02:08:37 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const & src);
        virtual ~Dog();

        Dog & operator=(Dog const & rhs);
        void makeSound() const;
        std::string getType();
    private:
        Brain *_brain;
};

#endif