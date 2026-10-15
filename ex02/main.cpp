/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 00:38:11 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/24 11:07:44 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main () {

	// Animal animal; // object of abstract class type "Animal" is not allowed:C/C++(322)

	std::cout << "Creazione trsmite puntatore su classe di base:" << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat(); 
	
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;

	return 0;
}
