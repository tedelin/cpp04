/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:24:20 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/22 13:51:47 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy) {
    std::cout << "Cat" << " copy constructor has been called" << std::endl;
    *this = cpy;
}

Cat&    Cat::operator=(const Cat& rhs) {
    if (this != &rhs) {
        Animal::operator=(rhs);
        type = rhs.getType();
    }
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}