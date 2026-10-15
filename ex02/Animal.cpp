/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:56:39 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/24 10:56:14 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>
#include <string>

Animal:: Animal() : _type("Generic Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
	if(this != &other) {
		_type = other._type;
	}
	std::cout << "Animal assignement operator called" << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

// void Animal::makeSound() const {
// 	std::cout  << "Typical animal sound" << std::endl;
// }

// удяляем метод

std::string Animal::getType() const {
	return _type;
}