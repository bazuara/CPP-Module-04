/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:56:38 by bazura            #+#    #+#             */
/*   Updated: 2024/03/21 18:21:58 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal {
 public:
  Dog();
  ~Dog();
  Dog(const Dog& other);
  Dog& operator=(const Dog& other);
  void makeSound() const;

 private:
  Brain* brain;
};

#endif  // DOG_HPP_
