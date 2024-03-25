/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:06:56 by bazura            #+#    #+#             */
/*   Updated: 2024/03/21 18:39:35 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>
#include <Dog.hpp>

Dog::Dog() : Animal() {
  this->setType("Dog");
  std::cout << "Dog constructor called" << std::endl;
}  // Default constructor

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
}  // Destructor

Dog::Dog(const Dog& other)  : Animal(other) {
  std::cout << "Dog copy constructor called" << std::endl;
  // std::cout << other.getType() << std::endl;
  // this->setType(other.getType());
  // for (int i = 0; i < 100; i++) {
  //   this->brain->setIdea(i, other.brain->getIdea(i));
  // }
}  // Copy constructor

Dog& Dog::operator=(const Dog& other) {
  this->setType(other.getType());
  return *this;
}  // Assignment operator

void Dog::makeSound() const {
  std::cout << "Guau Guau" << std::endl;
}  // Member function
