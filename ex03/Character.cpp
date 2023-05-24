/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:32:56 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/24 16:49:19 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	_name = "default";
	_nbMateria = 0;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string const & name)
{
	_name = name;
	_nbMateria = 0;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const & src)
{
	*this = src;
}

Character&	Character::operator=(const Character& rhs) {
	if (this != &rhs) {
		_name = rhs._name;
		_nbMateria = rhs._nbMateria;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->_name);
}

void	Character::equip(AMateria* m) {
	
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3) {
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}
