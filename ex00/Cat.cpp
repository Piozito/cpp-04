/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:27:24 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/17 16:02:51 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const& a)
{
	std::cout << "Copy Cat assignment operator called" << std::endl;
	if(this != &a)
		this->type = a.type;
	return *this;
}

void Cat::makeSound(void)const
{
	std::cout << "*Meow* *Meow*" << std::endl;
}