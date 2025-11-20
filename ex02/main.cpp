/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:27:47 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/20 15:19:13 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//AAnimal q; //doesn't compile because it's and abstract class
	//const AAnimal* q = new AAnimal(); //same reason
	const Dog* i = new Dog();
	const Cat* j = new Cat();

	std::cout << "\n====================\n" << std::endl;

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;

	std::cout << "\n====================\n" << std::endl;

	i->makeSound();
	j->makeSound();

	std::cout << "\n====================\n" << std::endl;

	delete i;
	delete j;

	return 0;
}