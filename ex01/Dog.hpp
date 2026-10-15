/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:57:40 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/24 09:41:20 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal {
private:
		Brain* _brain;
public:
    Dog();
    Dog(const Dog &other);
    Dog& operator=(const Dog& other);
    virtual ~Dog();

	void makeSound() const;
	std::string getBrainIdea(int index) const;
	void setBrainIdea(int index, const std::string& idea);
};

#endif