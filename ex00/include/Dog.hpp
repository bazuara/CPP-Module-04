/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:56:38 by bazura            #+#    #+#             */
/*   Updated: 2024/02/22 18:58:36 by bazuara          ###   ########.fr       */
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
};

#endif  // DOG_HPP_
