/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:25:45 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/17 16:02:40 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
}

Dog& Dog::operator=(Dog const& a)
{
	std::cout << "Copy Dog assignment operator called" << std::endl;
	if(this != &a)
		this->type = a.type;
	return *this;
}

void Dog::makeSound(void)const
{
	std::cout << "*Bark* *Bark*" << std::endl;
}