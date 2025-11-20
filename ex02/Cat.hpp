/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:27:04 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/20 15:11:19 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat& operator=(Cat const& a);

		std::string getType() const;
		void makeSound(void)const;
		void setIdea(std::string ideia);
		void getIdea();
};

#endif