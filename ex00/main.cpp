/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:54:06 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/24 13:42:03 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main() {

	std::cout << "---Polymorphism subject test:---" << std::endl;

	const Animal* meta = new Animal(); 
	const Animal* j = new Dog(); 
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n\n---Wrong Polymorphism test:---" << std::endl;
	const WrongAnimal *wrongmeta = new WrongAnimal();
	const WrongAnimal* wroncCat = new WrongCat();

	std::cout << "\n---Wrong animals make sounds:---" << std::endl;
	wrongmeta->makeSound();
	wroncCat->makeSound(); // non dira' mai mew

	delete wrongmeta;
	delete wroncCat;

    return 0;
}
