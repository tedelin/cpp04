/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:32:34 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/23 15:51:01 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& cpy) {
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain&  Brain::operator=(const Brain& rhs) {
    std::cout << "Brain copy assignement called" << std::endl;
}


Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}
