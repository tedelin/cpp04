/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:15:27 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/27 01:42:30 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog& cpy) : Animal(cpy) {
    std::cout << "Dog" << " copy constructor has been called" << std::endl;
    this->_brain = new Brain(*cpy._brain);
    this->type = cpy.getType();
}

Dog&    Dog::operator=(const Dog& rhs) {
    if (this != &rhs) {
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
        this->type = rhs.getType();
    }
    return (*this);
}

void    Dog::makeSound() const {
    std::cout << "Waouf !" << std::endl;
}

Brain*	Dog::getBrain() const {
	return (this->_brain);
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}