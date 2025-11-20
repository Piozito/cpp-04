/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:11:45 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/17 16:12:12 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->type = "N/A";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& a)
{
	std::cout << "Copy WrongAnimal assignment operator called" << std::endl;
	if(this != &a)
		this->type = a.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Unknown WrongAnimal sounds..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
