/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:59:43 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/24 10:05:52 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
	_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	_brain = new Brain(*other._brain);
    std::cout << "Cat copy constructor called\n";
}


Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assignement operator called" << std::endl;
    if (this != &other) {
    	Animal::operator=(other);
		delete _brain;
		_brain = new Brain (*other._brain);
	}
    return *this;
}

void Cat::makeSound() const {
	std::cout << "Mew!" << std::endl;
}

std::string Cat::getBrainIdea(int index) const {
	if(_brain) {
		return (_brain->getIdea(index));
	}
	return "";
}

void Cat::setBrainIdea(int index, const std::string& idea) {
	if(_brain) {
		_brain->setIdea(index, idea);
	}
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}
