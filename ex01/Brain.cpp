/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:23:36 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/20 14:59:30 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : _num(0)
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const& a)
{
	std::cout << "Copy Brain assignment operator called" << std::endl;
	if(this != &a)
	{
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = a._ideas[i];
	}
	return *this;
}

void Brain::setIdea(const std::string& ideia)
{
	if (this->_num >= 100)
		std::cout << "Brain is full" << std::endl;
	else
		this->_ideas[this->_num++] = ideia;
}

std::string Brain::getIdea(unsigned long i) const
{
	if (i >= this->_num)
		return std::string();
	return this->_ideas[i];
}