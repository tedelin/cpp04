/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:16:12 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/24 16:09:58 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

class Animal {
    public:
        Animal();
        virtual ~Animal();
        Animal(std::string a_type);
        Animal(const Animal& cpy);
        Animal& operator=(const Animal& rhs);

        virtual void    makeSound() const = 0;
        std::string     getType() const;
        
    protected:
        std::string type;
};

#endif