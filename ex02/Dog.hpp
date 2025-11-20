/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:24:02 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/20 15:11:25 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();
		Dog& operator=(Dog const& a);

		std::string getType() const;
		void makeSound(void)const;
		void setIdea(std::string ideia);
		void getIdea();
};

#endif