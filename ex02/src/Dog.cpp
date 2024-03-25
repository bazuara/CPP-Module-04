/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:06:56 by bazura            #+#    #+#             */
/*   Updated: 2024/03/25 13:00:46 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>
#include <Dog.hpp>

Dog::Dog() : Animal() {
  std::cout << "Dog constructor called" << std::endl;
  this->setType("Dog");
  brain = new Brain();
}  // Default constructor

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
  delete brain;
}  // Destructor

Dog::Dog(const Dog& other) : Animal(other) {
  std::cout << "Dog copy constructor called" << std::endl;
  brain = new Brain(*other.brain);
}  // Copy constructor

Dog& Dog::operator=(const Dog& other) {
  std::cout << "Dog assignment operator called" << std::endl;
  if (this == &other)
    return *this;
  *brain = *other.brain;
  Animal::operator=(other);
  return *this;
}  // Assignment operator

void Dog::makeSound() const {
  std::cout << "Guau Guau" << std::endl;
}  // Member function

Brain* Dog::getBrain() const {
  return brain;
}  // Get brain

