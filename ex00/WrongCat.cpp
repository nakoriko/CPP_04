/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:58:57 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/23 23:17:45 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

	WrongCat::WrongCat() {
		_type = "WrongCat";
		std::cout << "WrongCat constructor called" << std::endl;
	}

	WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
		std::cout << "WrongCat copy constructor called" << std::endl;
	}

	WrongCat& WrongCat::operator=(const WrongCat& other) {
		if (this != &other) {
			WrongAnimal::operator=(other);
		}
		std::cout << "WrongCat assignement operator called" << std::endl;
		return *this;
	}
	void WrongCat::makeSound() const {
		std::cout << "Wrong mew!" << std::endl;
	}

	WrongCat::~WrongCat() {
		std::cout << "WrongCat destructor called" << std::endl;
	}

