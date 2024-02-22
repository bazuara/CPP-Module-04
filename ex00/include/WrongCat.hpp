/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:59:52 by bazuara           #+#    #+#             */
/*   Updated: 2024/02/22 19:18:55 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP_
#define WRONG_CAT_HPP_

#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal {
 public:
  WrongCat();
  ~WrongCat();
  WrongCat(const WrongCat& other);
  WrongCat& operator=(const WrongCat& other);
  void makeSound() const;
};
#endif  // WRONG_CAT_HPP_
