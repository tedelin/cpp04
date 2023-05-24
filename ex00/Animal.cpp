/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:28:59 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/22 13:48:09 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string a_type) : type(a_type) {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& cpy) {
    std::cout << "Animal copy constructor called" << std::endl;
    type = cpy.getType();
}

Animal& Animal::operator=(const Animal& rhs) {
    if (this != &rhs) {
        type = rhs.getType();
    }
    return (*this);
}

void    Animal::makeSound() const {
    std::cout << "* Make an indistinguishable sound *" << std::endl;
}

std::string    Animal::getType() const {
    return (type);
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}