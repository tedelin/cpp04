/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:24:20 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/23 15:35:05 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") {
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy) {
    std::cout << "Cat" << " copy constructor has been called" << std::endl;
    *this = cpy;
}

Cat&    Cat::operator=(const Cat& rhs) {
    if (this != &rhs) {
        Animal::operator=(rhs);
        delete this->_brain;
        this->_brain = new Brain(*rhs._brain);
        this->type = rhs.getType();
    }
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}