/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:59:43 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/23 23:25:33 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}


Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor called\n";
}


Cat& Cat::operator=(const Cat& other) {
    if (this != &other)
        Animal::operator= (other);
    std::cout << "Cat assignement operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const {
	std::cout << "Mew!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}
