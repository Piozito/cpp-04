/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:10:23 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/17 16:10:23 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const& a)
{
	std::cout << "Copy WrongCat assignment operator called" << std::endl;
	if(this != &a)
		this->type = a.type;
	return *this;
}