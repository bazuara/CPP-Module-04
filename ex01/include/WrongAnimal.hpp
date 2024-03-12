/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:49:47 by bazura            #+#    #+#             */
/*   Updated: 2024/02/22 19:29:13 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP_
#define WRONG_ANIMAL_HPP_

#include <iostream>

class WrongAnimal {
 public:
  WrongAnimal();
  virtual ~WrongAnimal();
  WrongAnimal(const WrongAnimal& other);

  WrongAnimal& operator=(const WrongAnimal& other);
  void makeSound() const;
  std::string getType() const;
  void setType(std::string type);

 protected:
  std::string type;
};

#endif  // WRONG_ANIMAL_HPP_
