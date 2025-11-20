/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:25:45 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/20 14:40:20 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_brain = new Brain();
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
	delete this->_brain;
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

void Dog::setIdea(std::string ideia)
{
	this->_brain->setIdea(ideia);
}

void Dog::getIdea()
{
	for(unsigned long i = 0; i < 100; i++)
		std::cout << "This Dog is thinking about \"" << this->_brain->getIdea(i) << "\"" << std::endl;
}
