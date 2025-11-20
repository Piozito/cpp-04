/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:27:47 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/20 09:21:02 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongCat* wrongCat = new WrongCat();

	std::cout << "\n====================\n" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;

	std::cout << "\n====================\n" << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	meta->makeSound();

	std::cout << "\n====================\n" << std::endl;

	delete i;
	delete j;
	delete meta;
	delete wrongAnimal;
	delete wrongCat;

	return 0;
}