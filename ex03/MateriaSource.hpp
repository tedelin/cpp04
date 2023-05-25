/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:33:56 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/25 13:23:04 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & cpy);
		~MateriaSource();
		MateriaSource & operator=(const MateriaSource& rhs);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);

	private:
		static const int _maxMateria = 4;
		
		AMateria* _learned[_maxMateria];
		int _idx;
};

#endif