/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:14:26 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/25 18:44:54 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() {}

AMateria::AMateria(AMateria const & cpy)
{
	*this = cpy;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

void	AMateria::use(ICharacter& target)
{
	(void) target;
}

AMateria& AMateria::operator=(AMateria const & rhs)
{
	type = rhs.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

AMateria::~AMateria(void) {}

