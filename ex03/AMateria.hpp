/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:14:29 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/25 11:31:02 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H
#include "ICharacter.hpp"
#include <string>

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & cpy);
		virtual ~AMateria();
		AMateria& operator=(AMateria const & rhs);
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string	type;

	private:
		AMateria();
};

#endif