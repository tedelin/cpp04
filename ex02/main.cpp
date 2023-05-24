/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:29:51 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/24 16:12:43 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main( void )
{
    {
        std::cout << std::endl << "--------------- Test Sound ---------------" << std::endl << std::endl;
        
		Dog *dog = new Dog();
		Cat *cat = new Cat();

		std::cout << std::endl;

		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;

		std::cout << std::endl;

		dog->makeSound();
		cat->makeSound();

		std::cout << std::endl;
		
		std::cout << "================== TEST DEEP COPY ==================\n" << std::endl;

		cat->getBrain()->setIdea(0, "I like mouse");
		cat->getBrain()->setIdea(1, "I like milk");

		std::cout << "Cat ideas:" << std::endl;
		for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat->getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		// Dog basic;
		// {
		//     Dog tmp = basic;
		// }
		Cat *cat2 = new Cat();
		std::cout << std::endl;

		std::cout << "Cat2 ideas" << std::endl;
		for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat2->getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "Cat2 = Cat" << std::endl;
		*cat2 = *cat;
		std::cout << std::endl;

		std::cout << "Cat ideas:" << std::endl;
		for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat->getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "Cat2 ideas" << std::endl;
		for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat2->getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "Cat ideas (now he hates ice cream)" << std::endl;
		cat->getBrain()->setIdea(1, "I hate ice cream");
		for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat->getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << "Cat2 ideas" << std::endl;
		for (int i = 0; i < 2; i++) std::cout << "Idea: " << cat2->getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		delete dog;
		delete cat2;
		delete cat;

		std::cout << "================ SUBJECT ARRAY TEST ================\n" << std::endl;

		Animal *animals[10];

		for (int i = 0; i < 10; i++) {
			if (i < 5) {
				animals[i] = new Cat();
			} else {
				animals[i] = new Dog();
			}
		}

		std::cout << std::endl;

		for (int i = 0; i < 10; i++) {
			animals[i]->makeSound();
		}

		std::cout << std::endl;
		
		for (int i = 0; i < 10; i++) {
			delete animals[i];
		}
    }
    return 0;
}