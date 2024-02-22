/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:09:38 by bazura            #+#    #+#             */
/*   Updated: 2024/02/22 19:12:14 by bazuara          ###   ########.fr       */
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
  type = other.getType();
  return *this;
}  // Assignment operator

void Animal::makeSound() const {
  std::cout << "Animal sound" << std::endl;
}  // Make sound

std::string Animal::getType() const {
  return this->type;
}  // Get type

void Animal::setType(std::string type) {
  this->type = type;
}  // Set type
