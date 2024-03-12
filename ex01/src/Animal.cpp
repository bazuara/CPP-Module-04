/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:09:38 by bazura            #+#    #+#             */
/*   Updated: 2024/02/22 19:41:39 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Brain.hpp>

Animal::Animal() {
  type = "Animal";
  brain = new Brain();
  std::cout << "Animal constructor called" << std::endl;
}  // Default constructor

Animal::~Animal() {
  std::cout << "Animal destructor called" << std::endl;
  delete brain;
}  // Destructor

Animal::Animal(const Animal& other) {
  *this = other;
}  // Copy constructor

Animal& Animal::operator=(const Animal& other) {
  type = other.getType();
  brain = other.getBrain();
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

Brain* Animal::getBrain() const {
  return this->brain;
}  // Get brain

void Animal::setBrain(Brain* brain) {
  this->brain = brain;
}  // Set brain
