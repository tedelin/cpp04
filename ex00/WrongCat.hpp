/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:49:40 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/22 13:24:23 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
# include "WrongAnimal.hpp"
# include <string>

class WrongCat: public WrongAnimal {
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& cpy);
        WrongCat&    operator=(const WrongCat& rhs);

        void    makeSound() const;
};

#endif