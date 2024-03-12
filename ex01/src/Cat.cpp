/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:09:07 by bazura            #+#    #+#             */
/*   Updated: 2024/02/22 18:53:26 by bazuara          ###   ########.fr       */
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

Cat::Cat(const Cat& other) {
  *this = other;
}  // Copy constructor

Cat& Cat::operator=(const Cat& other) {
  this->setType(other.getType());
  return *this;
}  // Assignment operator

void Cat::makeSound() const {
  std::cout << "Miau Miau" << std::endl;
}  // Member function
