/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:06:56 by bazura            #+#    #+#             */
/*   Updated: 2024/03/25 11:32:21 by bazura           ###   ########.fr       */
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
}  // Copy constructor

Dog& Dog::operator=(const Dog& other) {
  std::cout << "Dog assignment operator called" << std::endl;
  if (this == &other) return *this;
  Animal::operator=(other);
  return *this;
}  // Assignment operator

void Dog::makeSound() const {
  std::cout << "Guau Guau" << std::endl;
}  // Member function
