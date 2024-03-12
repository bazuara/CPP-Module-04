/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:49:47 by bazura            #+#    #+#             */
/*   Updated: 2024/02/22 19:33:39 by bazuara          ###   ########.fr       */
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
  Brain* getBrain() const;
  void setBrain(Brain* brain);

 private:
  std::string type;
  Brain* brain;
};

#endif  // ANIMAL_HPP_
