/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:25:42 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/22 13:53:21 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string a_type) : type(a_type) {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    type = cpy.getType();
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
    if (this != &rhs) {
        type = rhs.getType();
    }
    return (*this);
}

void    WrongAnimal::makeSound() const {
    std::cout << "* Make an indistinguishable sound *" << std::endl;
}

std::string    WrongAnimal::getType() const {
    return (type);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}