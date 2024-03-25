/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:49:47 by bazura            #+#    #+#             */
/*   Updated: 2024/03/25 12:24:23 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <Brain.hpp>

class Animal {
 public:
  Animal();
  virtual ~Animal();
  Animal(const Animal& other);

  Animal& operator=(const Animal& other);
  virtual void makeSound() const;
  std::string getType() const;
  void setType(std::string type);

 private:
  std::string type;
};

#endif  // ANIMAL_HPP_
