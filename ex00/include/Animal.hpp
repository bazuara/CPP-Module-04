/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:49:47 by bazura            #+#    #+#             */
/*   Updated: 2024/02/15 17:39:07 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

class Animal {
 public:
  Animal();
  virtual ~Animal();
  Animal(const Animal& other);

  Animal& operator=(const Animal& other);
  virtual void makeSound() const;
  std::string getType() const;

 protected:
  std::string type;
};

#endif  // ANIMAL_HPP_
