/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:54:42 by bazuara           #+#    #+#             */
/*   Updated: 2024/02/15 17:42:10 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal() {
  this->type = "WrongCat";
  std::cout << "WrongCat constructor called" << std::endl;
}  // Default constructor

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called" << std::endl;
}  // Destructor

WrongCat::WrongCat(const WrongCat& other) {
  *this = other;
}  // Copy constructor

WrongCat& WrongCat::operator=(const WrongCat& other) {
  type = other.type;
  return *this;
}  // Assignment operator

void WrongCat::makeSound() const {
  std::cout << "Guau Guau" << std::endl;
}  // Member function
