/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 00:11:27 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/24 09:37:51 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

	Brain::Brain(){
		std::cout << "Brain default constructor called" << std::endl;
		for (int i = 0; i < 100; ++i) {
			ideas[i] = "Simple idea";
		}
	}

	Brain::Brain(const Brain& other) {
		std::cout << "Brain copy constructor called" << std::endl;
		for (int i = 0; i < 100; ++i) {
			ideas[i] = other.ideas[i];
		}
	}

	Brain& Brain::operator=(const Brain& other) {
		std::cout << "Brain assignement operator called" << std::endl;

		if (this != &other) {
			for (int i = 0; i < 100; ++i) {
				ideas[i] = other.ideas[i];
			}
		}
		return *this;
	}

	std::string Brain::getIdea(int index) const{
		if (index >= 0 && index < 100) {
			return(ideas[index]);
		}
		return "";
	}

	void Brain::setIdea(int index, const std::string& idea){
		if (index >=0 && index < 100) {
			ideas[index] = idea;
		}
	}

	Brain::~Brain() {
		std::cout << "Brain default destructor called" << std::endl;
		
	}
