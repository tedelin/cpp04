/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:49:03 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/24 11:38:51 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <string>
#include <iostream>

class WrongAnimal {
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(std::string a_type);
        WrongAnimal(const WrongAnimal& cpy);
        WrongAnimal& operator=(const WrongAnimal& rhs);

        void    makeSound() const;
        std::string     getType() const;
        
    protected:
        std::string type;
};

#endif