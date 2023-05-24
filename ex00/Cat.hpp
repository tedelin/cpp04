/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:17:53 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/22 13:21:50 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"
# include <string>

class Cat: public Animal {
    public:
        Cat();
        ~Cat();
        Cat(const Cat& cpy);
        Cat&    operator=(const Cat& rhs);

        void    makeSound() const;
};

#endif