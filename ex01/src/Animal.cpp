/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:09:38 by bazura            #+#    #+#             */
/*   Updated: 2024/03/21 18:39:13 by bazura           ###   ########.fr       */
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
  this->setType(other.getType());
  std::cout << "Animal copy constructor called" << std::endl;
  for (int i = 0; i < 100; i++) {
    this->brain->setIdea(i, other.brain->getIdea(i));
  }
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
