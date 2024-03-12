/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:07:57 by bazuara           #+#    #+#             */
/*   Updated: 2024/03/12 11:27:42 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>

int main() {
  std::cout << "Constructors:" << std::endl;
  const Animal* meta = new Animal();
  const Animal* i = new Dog();
  const Animal* j = new Cat();
  const WrongAnimal* w = new WrongAnimal();
  const WrongAnimal* x = new WrongCat();
  std::cout << std::endl;

  std::cout << "Types of animals:" << std::endl;
  std::cout << meta->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << j->getType() << " " << std::endl;
  std::cout << w->getType() << " " << std::endl;
  std::cout << x->getType() << " " << std::endl;
  std::cout << std::endl;

  std::cout << "Animals sounds:" << std::endl;
  meta->makeSound();  // will output the animal sound!
  i->makeSound();     // will output the cat sound!
  j->makeSound();     // will output the dog sound!
  w->makeSound();     // will output the wrong animal sound!
  x->makeSound();     // will output the wrong cat sound!
  std::cout << std::endl;

  std::cout << "Destructors:" << std::endl;
  delete meta;
  delete i;
  delete j;
  delete w;
  delete x;
  return 0;
}
