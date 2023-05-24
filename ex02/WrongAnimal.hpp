/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:49:03 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/22 13:28:07 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <string>
#include <iostream>

class WrongAnimal {
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(std::string a_type);
        WrongAnimal(const WrongAnimal& cpy);
        WrongAnimal& operator=(const WrongAnimal& rhs);

        void    makeSound() const;
        std::string     getType() const;
        
    protected:
        std::string type;
};

#endif