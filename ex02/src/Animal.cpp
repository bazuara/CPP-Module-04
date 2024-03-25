/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:09:38 by bazura            #+#    #+#             */
/*   Updated: 2024/03/25 13:13:20 by bazuara          ###   ########.fr       */
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

std::string Animal::getType() const {
  return this->getType();
}  // Get type

void Animal::setType(std::string type) {
  this->type = type;
}  // Set type
