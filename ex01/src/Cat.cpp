/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:09:07 by bazura            #+#    #+#             */
/*   Updated: 2024/03/25 13:00:23 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat() : Animal() {
  std::cout << "Cat constructor called" << std::endl;
  this->setType("Cat");
  brain = new Brain();
}  // Constructor

Cat::~Cat() {
  std::cout << "Cat destructor called" << std::endl;
  delete brain;
}  // Destructor

Cat::Cat(const Cat& other) : Animal(other) {
  std::cout << "Cat copy constructor called" << std::endl;
  brain = new Brain(*other.brain);
}  // Copy constructor

Cat& Cat::operator=(const Cat& other) {
  std::cout << "Cat assignment operator called" << std::endl;
  if (this == &other)
    return *this;
  *brain = *other.brain;
  Animal::operator=(other);
  return *this;
}  // Assignment operator

void Cat::makeSound() const {
  std::cout << "Miau Miau" << std::endl;
}  // Member function

Brain* Cat::getBrain() const {
  return brain;
}  // Get brain

