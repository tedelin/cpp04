/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:25:32 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/22 13:53:42 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy) : WrongAnimal(cpy) {
    std::cout << "WrongCat" << " copy constructor has been called" << std::endl;
    *this = cpy;
}

WrongCat&    WrongCat::operator=(const WrongCat& rhs) {
    if (this != &rhs) {
        type = rhs.getType();
    }
    return (*this);
}

void    WrongCat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}