/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:58:31 by bazura            #+#    #+#             */
/*   Updated: 2024/02/22 19:08:27 by bazuara          ###   ########.fr       */
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
};

#endif  // CAT_HPP_
