/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:32:53 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/25 18:27:26 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string const & name);
		Character(Character const & cpy);
		virtual ~Character();
		Character & operator=(Character const & rhs);
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	
	private:
		static const int _maxItems = 4;

		Character();
		std::string _name;
		AMateria* _inventory[4];
};

#endif