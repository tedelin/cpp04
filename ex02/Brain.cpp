/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:32:34 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/24 14:25:13 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& cpy) {
    std::cout << "Brain copy constructor called" << std::endl;
	*this = cpy;
}

Brain&  Brain::operator=(const Brain& rhs) {
    std::cout << "Brain copy assignement called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = std::string(rhs._ideas[i]);
		}
	}
	return (*this);
}

void	Brain::setIdea(int i, std::string idea) {
	this->_ideas[i] = idea;
}

std::string	Brain::getIdea(int i) {
	return (this->_ideas[i]);
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}
