/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:20:55 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/20 15:07:14 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default AAnimal constructor called" << std::endl;
	this->type = "N/A";
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
	*this = copy;
}

AAnimal::~AAnimal()
{
	std::cout << "Default AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const& a)
{
	std::cout << "Copy Animal assignment operator called" << std::endl;
	if(this != &a)
		this->type = a.type;
	return *this;
}