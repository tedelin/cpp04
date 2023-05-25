/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:34:00 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/25 16:34:13 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : _idx(0) {
	for (int i = 0; i < _maxMateria; i++) {
		_learned[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & cpy) {
	*this = cpy;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs) {
	if (this != &rhs) {
		for (int i = 0; i < _maxMateria; i++) {
			if (_learned[i]) {
				delete _learned[i];
			}
			if (rhs._learned[i]) {
				_learned[i] = rhs._learned[i]->clone();
			}
		}
		_idx = rhs._idx;
	}
	return (*this);
}


void	MateriaSource::learnMateria(AMateria* m) {
	if (_idx >= 0 && _idx < _maxMateria) {
		_learned[_idx++] = m;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < _maxMateria; i++) {
		if (_learned[i]->getType() == type) {
			return this->_learned[i]->clone();
		}
	}
	return (NULL);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < _maxMateria; i++) {
		if (_learned[i]) {
			delete _learned[i];
		}
	}
}