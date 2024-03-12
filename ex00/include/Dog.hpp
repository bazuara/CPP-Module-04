/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:56:38 by bazura            #+#    #+#             */
/*   Updated: 2024/03/12 11:15:40 by bazura           ###   ########.fr       */
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
  virtual void makeSound() const;
};

#endif  // DOG_HPP_
