/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:56:38 by bazura            #+#    #+#             */
/*   Updated: 2024/02/12 17:34:48 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include <Animal.hpp>

class Dog : public Animal {
 public:
  Dog();
  ~Dog();
  Dog(const Dog& other);
  Dog& operator=(const Dog& other);
  void makeSound() const;
  std::string getType() const;
};

#endif  // DOG_HPP_
