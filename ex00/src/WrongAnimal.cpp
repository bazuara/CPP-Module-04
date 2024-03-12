/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:02:57 by bazuara           #+#    #+#             */
/*   Updated: 2024/02/22 19:21:52 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() {
  type = "WrongAnimal";
  std::cout << "WrongAnimal constructor called" << std::endl;
}  // Default constructor

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called" << std::endl;
}  // Destructor

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
  *this = other;
}  // Copy constructor

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  type = other.type;
  return *this;
}  // Assignment operator

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal sound" << std::endl;
}  // Make sound

std::string WrongAnimal::getType() const {
  return this->type;
}  // Get type

void WrongAnimal::setType(std::string type) {
  this->type = type;
}  // Set type
