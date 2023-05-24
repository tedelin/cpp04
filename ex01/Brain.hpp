/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:40:09 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/23 13:40:22 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
#include <string>

class Brain {

    public:
        Brain();
        ~Brain();
        Brain(const Brain& cpy);
        Brain&  operator=(const Brain& rhs);
    
    private:
        std::string ideas[100];
};

#endif