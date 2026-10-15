/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:59:38 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/24 13:42:31 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

	WrongAnimal::WrongAnimal () : _type("Wrong Animal") {
		std::cout << "WrongAnimal default constructor called" << std::endl;
	}

	WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type) {
		std::cout << "WrongAnimal copy constructor called" << std::endl;
	}


	WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
		if(this != &other) 
			_type = other._type;
		std::cout << "WrongAnimal assignement operator called" << std::endl;
		return *this;
	}

	WrongAnimal::~WrongAnimal() {
		std::cout << "WrongAnimal destructor called" << std::endl;
	}

	void WrongAnimal::makeSound() const {
		std::cout << "Wrong Animal sound"  << std::endl;
	}

	std::string WrongAnimal::getType() const {
		return _type;
	}