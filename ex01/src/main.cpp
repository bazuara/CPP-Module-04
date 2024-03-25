/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:07:57 by bazuara           #+#    #+#             */
/*   Updated: 2024/03/25 10:50:52 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Brain.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>

int main() {
  const Animal* i = new Cat();

  i->makeSound();  // will output the cat sound!
  i->getBrain()->setIdea(0, "I am a cat");
  std::cout << i->getBrain()->getIdea(0) << std::endl;
  i->getBrain()->setIdea(1, "I am a cat again on 1");
  std::cout << i->getBrain()->getIdea(1) << std::endl;
  i->getBrain()->setIdea(2, "I am a cat again on 2");
  std::cout << i->getBrain()->getIdea(2) << std::endl;
  delete i;

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
    animals[i]->getBrain()->setIdea(0, "Idea");
    std::cout << animals[i]->getBrain()->getIdea(0) << std::endl;
  }

  // deep copy test
  std::cout << std::endl;
  std::cout << "DEEP COPY:" << std::endl;
  std::cout << std::endl;
  const Dog* ani = new Dog();
  std::cout << "Ani exists" << std::endl;
  ani->getBrain()->setIdea(0, "This is ani dog idea");
  const Dog* mal = new Dog(*ani);
    std::cout << "Mal exists" << std::endl;
  mal->getBrain()->setIdea(0, "This is mal dog idea");
  std::cout << ani->getBrain()->getIdea(0) << std::endl;
  std::cout << mal->getBrain()->getIdea(0) << std::endl;
  std::cout << "Bye bye ani" << std::endl;
  delete ani;
  delete mal;

  // free all animals from array
  std::cout << std::endl;
  std::cout << "FREEEEEEE:" << std::endl;
  std::cout << std::endl;
  for (int i = 0; i < n; i++) {
    delete animals[i];
  }

  return 0;
}
