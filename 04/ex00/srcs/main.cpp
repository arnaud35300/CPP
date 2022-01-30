/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 21:01:55 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	Animal	*animal = new Animal();
	Animal	*cat	= new Cat();
	Animal	*dog	= new Dog();


	std::cout << "[" << animal->getType() << "] ";
	animal->makeSound();
	std::cout << "[" << cat->getType() << "] ";
	cat->makeSound();
	std::cout << "[" << dog->getType() << "] ";
	dog->makeSound();

	delete animal;
	delete cat;
	delete dog;

	std::cout << std::endl << std::endl;

	WrongAnimal	*wrongAnimal = new WrongAnimal();
	WrongAnimal	*wrongCat = new WrongCat();

	std::cout << "[" << wrongAnimal->getType() << "] ";
	wrongAnimal->makeSound();
	std::cout << "[" << wrongCat->getType() << "] ";
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;
	return (0);
}
