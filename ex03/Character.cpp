/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:32:56 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/29 16:24:16 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void)
{
	_name = "";
	for (int i = 0; i < _maxItems; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string& name)
{
	_name = name;
	for (int i = 0; i < _maxItems; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& cpy)
{
	_name = cpy._name;
	for (int i = 0; i < _maxItems; i++)
	{
		if (cpy._inventory[i])
			_inventory[i] = cpy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character&	Character::operator=(const Character& rhs) {
	if (this != &rhs) {
		_name = rhs._name;
		for (int i = 0; i < _maxItems; i++)
		{
			if (_inventory[i]) {
				delete _inventory[i];
			}
			_inventory[i] = NULL;
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->_name);
}

void	Character::equip(AMateria* m) {
	if (!m)
	{
		std::cout << "Materia unknown" << std::endl;
		return ;
	}
	for (int i = 0; i < _maxItems; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			std::cout << "Materia " << _inventory[i]->getType() << " equipped" << " at index " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory full" << std::endl;
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < _maxItems) {
		if (_inventory[idx]) {
			this->_inventory[idx] = NULL;
		}
	}
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < _maxItems && _inventory[idx]) {
		_inventory[idx]->use(target);
	}
	else {
		std::cout << "No materia at index " << idx << std::endl;
	}
}

Character::~Character(void)
{
	for (int i = 0; i < _maxItems; i++)
	{
		if (_inventory[i]) {
			delete _inventory[i];
		}
	}
}
