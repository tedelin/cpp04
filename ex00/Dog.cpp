/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:15:27 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/22 13:52:34 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy) {
    std::cout << "Dog" << " copy constructor has been called" << std::endl;
    *this = cpy;
}

Dog&    Dog::operator=(const Dog& rhs) {
    if (this != &rhs) {
        type = rhs.getType();
    }
    return (*this);
}

void    Dog::makeSound() const {
    std::cout << "Waf !" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}