/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:32:53 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/29 16:22:37 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(const std::string& name);
		Character(const Character& cpy);
		~Character();
		Character & operator=(const Character& rhs);
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	
	private:
		static const int _maxItems = 4;

		std::string _name;
		AMateria* _inventory[Character::_maxItems];
};

#endif