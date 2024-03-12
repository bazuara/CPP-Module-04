/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:07:57 by bazuara           #+#    #+#             */
/*   Updated: 2024/03/12 10:18:04 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Brain.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>

int main() {
  // const Animal* i = new Cat();

  // i->makeSound();  // will output the cat sound!
  // i->getBrain()->setIdea(0, "I am a cat");
  // std::cout << i->getBrain()->getIdea(0) << std::endl;
  // i->getBrain()->setIdea(1, "I am a cat again on 1");
  // std::cout << i->getBrain()->getIdea(1) << std::endl;
  // i->getBrain()->setIdea(2, "I am a cat again on 2");
  // std::cout << i->getBrain()->getIdea(2) << std::endl;
  // delete i;

  // create an array of Animals, half Cat, half Dog
  const int n = 4;
  const Animal* animals[n];
  for (int i = 0; i < n / 2; i++) {
    animals[i] = new Cat();
    std::cout << "Animal type on " << i << " is a Cat" << std::endl;
  }
  for (int i = n / 2; i < n; i++) {
    animals[i] = new Dog();
    std::cout << "Animal type on " << i << " is a Dog" << std::endl;
  }

  // make them speak
  for (int i = 0; i < n; i++) {
    animals[i]->makeSound();
    animals[i]->getBrain()->setIdea(0, "hola");
    std::cout << animals[i]->getBrain()->getIdea(0) << std::endl;
  }

  // deep copy the first animal to a new one
  // const Cat* cat = animals[0];

    // free all animals from array
  for (int i = 0; i < n; i++) {
    delete animals[i];
  }
  return 0;
}
