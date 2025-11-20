/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:23:44 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/20 14:56:17 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Brain
{
	private:
		std::string _ideas[100];
		unsigned long _num;

	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain &copy);
		Brain& operator=(Brain const& a);
		
		void setIdea(const std::string& ideia);
		std::string getIdea(unsigned long i) const;
};

#endif