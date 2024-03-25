/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:09:38 by bazura            #+#    #+#             */
/*   Updated: 2024/03/25 12:45:43 by bazura           ###   ########.fr       */
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
  type = other.type;
  std::cout << "Animal copy constructor called" << std::endl;
}  // Copy constructor

Animal& Animal::operator=(const Animal& other) {
  std::cout << "Animal assignment operator called" << std::endl;
  type = other.type;
  return *this;
}  // Assignment operator

void Animal::makeSound() const {
  std::cout << "Animal sound" << std::endl;
}  // Make sound

std::string Animal::getType() const {
  return this->getType();
}  // Get type

void Animal::setType(std::string type) {
  this->type = type;
}  // Set type

