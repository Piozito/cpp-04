/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:27:47 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/20 15:13:13 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *array[10];

	srand(time(0));

	for(int i = 0; i < 10; i++)
	{
		if(i < 5)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	std::cout << "\n====================\n" << std::endl;

	array[0]->makeSound();
	array[7]->makeSound();

	std::cout << "\n====================\n" << std::endl;
	for(int i = 0; i < 10; i++)
		delete array[i];

	std::cout << "\n====================" << std::endl;
	std::cout << "====================\n" << std::endl;
	
	Cat a;

	std::cout << "\n====================\n" << std::endl;

	a.setIdea("bbbbbb");
	a.setIdea("miauuuu");
	a.setIdea("miau miau");
	a.setIdea("aaaaaa");

	a.getIdea();

	std::cout << "\n====================" << std::endl;
	std::cout << "====================\n" << std::endl;

	Cat *b = new Cat();

	b->setIdea("A");
	b->setIdea("AA");
	b->setIdea("AAA");
	b->setIdea("AAAA");

	std::cout << "\n====================\n" << std::endl;
	b->getIdea();
	std::cout << "\n====================\n" << std::endl;
	a.getIdea();
	std::cout << "\n====================\n" << std::endl;

	delete b;
	
	std::cout << "\n====================" << std::endl;
	std::cout << "====================\n" << std::endl;
}