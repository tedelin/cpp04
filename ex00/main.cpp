/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:29:51 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/24 11:39:14 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
	
    delete j;
	delete i;
	delete meta;
	
    std::cout << "WrongClass Test" << std::endl;

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();

    std::cout << wrong->getType() << std::endl;
    std::cout << wrong_cat->getType() << std::endl;

    wrong->makeSound();
    wrong_cat->makeSound();

	delete wrong_cat;
	delete wrong;
    
    return 0;
}