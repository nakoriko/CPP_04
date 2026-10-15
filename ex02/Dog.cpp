/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:57:49 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/24 09:42:32 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog() {
    _type = "Dog";
	_brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	_brain = new Brain(*other._brain);// пример глубокого копирования
    std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
		delete _brain; // !!!! удаляем предыдущи брейн, освобождая метсо для новго (а если не удалять?)
		_brain = new Brain(*other._brain);
    }
    std::cout << "Dog assignement operator called" << std::endl;
	return *this;
}

void Dog::makeSound()   const {
	std::cout << "Woof!" << std::endl;
}

std::string Dog::getBrainIdea(int index) const {
	if(_brain) {
		return (_brain->getIdea(index));
	}
	return "";
}

void Dog::setBrainIdea(int index, const std::string& idea) {
	if(_brain) {
		_brain->setIdea(index, idea);
	}
}

    
 Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
 }