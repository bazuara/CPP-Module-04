/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:06:56 by bazura            #+#    #+#             */
/*   Updated: 2024/02/12 17:35:45 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal() {
  this->type = "Dog";
  std::cout << "Dog constructor called" << std::endl;
}  // Default constructor

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
}  // Destructor

Dog::Dog(const Dog& other) {
  *this = other;
}  // Copy constructor

Dog& Dog::operator=(const Dog& other) {
  type = other.type;
  return *this;
}  // Assignment operator

void Dog::makeSound() const {
  std::cout << "Guau Guau" << std::endl;
}  // Member function
