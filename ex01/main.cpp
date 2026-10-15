/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 00:38:11 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/24 10:32:41 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main () {

	std::cout << " Creazione trsmite puntatore su classe di base:" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\nDestructor chain: " << std::endl;

	delete i;
	delete j;


	std::cout << "\nTEST ARRAY OF ANIMALS:" << std::endl;
	Animal* animals[100];
	
	std::cout << "\n---- Arrayof 50 dogs ----" << std::endl;
	for (int i = 0; i < 50; ++i) {
		animals[i] = new Dog();
	}
	std::cout << "\n---- Arrayof 50 cats  ----" << std::endl;
	for (int i = 50; i < 100; ++i) {
		animals[i] = new Cat();
	}

	std::cout << "\n---- Animals make sounds ----" << std::endl;
	for (int i = 0; i < 100; ++i) {
		animals[i]->makeSound();
	}

	std::cout << "\n\n---Clearing array:---" <<std::endl;
	for (int i = 0; i < 100; ++i) {
		delete animals[i];
	}

	std::cout << "\n\n---- DEEP COPIES TEST ----" << std::endl;
	Dog bigDog;
	bigDog.setBrainIdea (0, "I have a big idea");
	bigDog.setBrainIdea(1, "Another big idea");
	
	std::cout << "\n---- 1. Copy Constructor: ----" << std::endl;
	Dog smallDog(bigDog);

	std::cout << "\n---- 2. Assignement operatopr: ----" << std::endl;
	Dog mediumDog;
	mediumDog = bigDog;
	bigDog.setBrainIdea (0, "Changed a big idea");

	std::cout << "\n---- 2. Assignement operatopr: ----" << std::endl;
	std::cout << "Big: " << bigDog.getBrainIdea(0) << std::endl;
	std::cout << "Medium: " << mediumDog.getBrainIdea(0) << std::endl;
	std::cout << "Small: " << smallDog.getBrainIdea(0) << std::endl;

	std::cout << "\n---- 3. Cat deep cpoies test: ----" << std::endl;
	Cat bigCat;
	bigCat.setBrainIdea(0, "Cat have a big idea");

	Cat smallCat(bigCat);
	smallCat.setBrainIdea(0, "Cat have a smal idea");

	smallCat = bigCat;
	bigCat.setBrainIdea(0, "Cat changed his big idea");

	std::cout << "Big cat: " << bigCat.getBrainIdea(0) << std::endl;
	std::cout << "Small cat: " << smallCat.getBrainIdea(0) << std::endl;

	return 0;
}
