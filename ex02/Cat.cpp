/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:27:24 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/21 14:05:50 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->_brain = new Brain();
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(Cat const& a)
{
	std::cout << "Copy Cat assignment operator called" << std::endl;
	if(this != &a)
		this->type = a.type;
	return *this;
}

std::string Cat::getType() const
{
	return this->type;
}

void Cat::makeSound(void)const
{
	std::cout << "*Meow* *Meow*" << std::endl;
}

void Cat::setIdea(std::string ideia)
{
	static int i = 0;
	if(i > 100)
		i = 0;
	this->_brain->setIdea(ideia);
}

void Cat::getIdea()
{
	for(unsigned long i = 0; i < 100; i++)
	{
		std::string str = this->_brain->getIdea(i);
		if(str.empty())
			return ; 
		std::cout << "This Cat is thinking about \"" << str << "\"" << std::endl;
	}
}