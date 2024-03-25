/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:09:07 by bazura            #+#    #+#             */
/*   Updated: 2024/03/25 10:59:27 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat() : Animal() {
  this->setType("Cat");
  std::cout << "Cat constructor called" << std::endl;
}  // Constructor

Cat::~Cat() {
  std::cout << "Cat destructor called" << std::endl;
}  // Destructor

Cat::Cat(const Cat& other) : Animal(other) {
  std::cout << "Cat copy constructor called" << std::endl;
}  // Copy constructor

Cat& Cat::operator=(const Cat& other) {
  this->setType(other.getType());
  return *this;
}  // Assignment operator

void Cat::makeSound() const {
  std::cout << "Miau Miau" << std::endl;
}  // Member function
