/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:23:13 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/23 13:44:34 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"
# include <string>
# include "Brain.hpp"

class Dog: public Animal {
    public:
        Dog();
        ~Dog();
        Dog(const Dog& cpy);
        Dog&    operator=(const Dog& rhs);

        void    makeSound() const;
    
    private:
        Brain*  _brain;
};

#endif