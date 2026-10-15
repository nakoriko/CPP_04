/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:57:49 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/23 23:11:17 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog() {
    _type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog addignement operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
	return *this;
}

void Dog::makeSound()   const {
	std::cout << "Woof!" << std::endl;
}

    
 Dog::~Dog() {
    std::cout << "DOg destructor called" << std::endl;
 }