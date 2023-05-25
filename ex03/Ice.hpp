/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:31:27 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/25 13:38:11 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& src);
		virtual ~Ice(void);
		Ice&	operator=(Ice const & rhs);
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif