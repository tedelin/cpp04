/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:40:09 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/24 14:25:21 by tedelin          ###   ########.fr       */
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

		void	setIdea(int i, std::string idea);
		std::string	getIdea(int i);
    
    private:
        std::string _ideas[100];
};

#endif