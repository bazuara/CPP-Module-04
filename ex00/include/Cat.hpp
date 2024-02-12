/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:58:31 by bazura            #+#    #+#             */
/*   Updated: 2024/02/12 17:35:04 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include <Animal.hpp>

class Cat : public Animal {
 public:
  Cat();
  ~Cat();
  Cat(const Cat& other);
  Cat& operator=(const Cat& other);
  void makeSound() const;
  void getType() const;
};

#endif  // CAT_HPP_
