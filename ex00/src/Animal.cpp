/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:09:38 by bazura            #+#    #+#             */
/*   Updated: 2024/02/12 17:45:25 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal() {
  type = "Animal";
  std::cout << "Animal constructor called" << std::endl;
}  // Default constructor

Animal::~Animal() {
  std::cout << "Animal destructor called" << std::endl;
}  // Destructor

Animal::Animal(const Animal& other) {
  *this = other;
}  // Copy constructor

Animal& Animal::operator=(const Animal& other) {
  type = other.type;
  return *this;
}  // Assignment operator

void Animal::makeSound() const {
  if (type == "Dog")
    std::cout << "Woof woof" << std::endl;
  else if (type == "Cat")
    std::cout << "Meow meow" << std::endl;
  else
    std::cout << "Animal sound" << std::endl;
}  // Make sound

std::string Animal::getType() const {
  return this->type;
}  // Get type
