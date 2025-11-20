/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:46:21 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/20 15:17:08 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <cstdlib>

class AAnimal
{
	protected:
		AAnimal();
		AAnimal(const AAnimal &copy);
		std::string type;

	public:
		
		virtual ~AAnimal();
		AAnimal& operator=(AAnimal const& a);
		
		virtual std::string getType() const = 0;
		virtual void makeSound() const = 0; 
};

#endif