/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:07:57 by bazuara           #+#    #+#             */
/*   Updated: 2024/02/14 17:09:26 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>

int main() {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  const WrongAnimal* w = new WrongAnimal();
  const WrongAnimal* x = new WrongCat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << w->getType() << " " << std::endl;
  std::cout << x->getType() << " " << std::endl;

  i->makeSound();     // will output the cat sound!
  j->makeSound();     // will output the dog sound!
  meta->makeSound();  // will output the animal sound!
  w->makeSound();     // will output the wrong animal sound!
  x->makeSound();     // will output the wrong cat sound!

  delete j;
  delete i;
  delete meta;
  delete w;
  delete x;
  return 0;
}
