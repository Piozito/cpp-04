/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:20:55 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/17 12:35:05 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->type = "N/A";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const& a)
{
	std::cout << "Copy Animal assignment operator called" << std::endl;
	if(this != &a)
		this->type = a.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Unknown animal sounds..." << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
