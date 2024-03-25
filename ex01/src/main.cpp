/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:07:57 by bazuara           #+#    #+#             */
/*   Updated: 2024/03/25 11:33:07 by bazura           ###   ########.fr       */
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

  // // create an array of Animals, half Cat, half Dog
  // const int n = 4;
  // const Animal* animals[n];
  // for (int i = 0; i < n / 2; i++) {
  //   animals[i] = new Cat();
  //   std::cout << "Animal type on " << i << " is a Cat" << std::endl;
  // }
  // for (int i = n / 2; i < n; i++) {
  //   animals[i] = new Dog();
  //   std::cout << "Animal type on " << i << " is a Dog" << std::endl;
  // }

  // // make them speak
  // for (int i = 0; i < n; i++) {
  //   animals[i]->makeSound();
  //   animals[i]->getBrain()->setIdea(0, "Idea");
  //   std::cout << animals[i]->getBrain()->getIdea(0) << std::endl;
  // }

  // // deep copy test
  // std::cout << std::endl;
  // std::cout << "DEEP COPY DOG:" << std::endl;
  // std::cout << std::endl;
  // const Dog* anid = new Dog();
  // std::cout << "Anid exists" << std::endl;
  // anid->getBrain()->setIdea(0, "This is ani dog idea");
  // const Dog* mald = new Dog(*anid);
  //   std::cout << "Mald exists" << std::endl;
  // mald->getBrain()->setIdea(0, "This is mal dog idea");
  // std::cout << anid->getBrain()->getIdea(0) << std::endl;
  // std::cout << mald->getBrain()->getIdea(0) << std::endl;
  // std::cout << "Bye bye ani" << std::endl;
  // delete anid;
  // delete mald;

  // std::cout << std::endl;
  // std::cout << "DEEP COPY CAT:" << std::endl;
  // std::cout << std::endl;
  // const Cat* anic = new Cat();
  // std::cout << "Anic exists" << std::endl;
  // anic->getBrain()->setIdea(0, "This is ani cat idea");
  // const Cat* malc = new Cat(*anic);
  //   std::cout << "Mal exists" << std::endl;
  // malc->getBrain()->setIdea(0, "This is mal cat idea");
  // std::cout << anic->getBrain()->getIdea(0) << std::endl;
  // std::cout << malc->getBrain()->getIdea(0) << std::endl;
  // std::cout << "Bye bye ani" << std::endl;
  // delete anic;
  // delete malc;

  // deep assignment test

  std::cout << std::endl;
  std::cout << "DEEP ASSIGNMENT CAT:" << std::endl;
  std::cout << std::endl;
  const Cat* origcat = new Cat();
  origcat->getBrain()->setIdea(0, "this is a cats bad idea");
  Cat* copycat = new Cat();
  *copycat = *origcat;
  std::cout << copycat->getBrain()->getIdea(0) << std::endl;
  copycat->getBrain()->setIdea(0, "this is a cats good idea");
  std::cout << copycat->getBrain()->getIdea(0) << std::endl;

  delete origcat;
  delete copycat;

  std::cout << std::endl;
  std::cout << "DEEP ASSIGNMENT DOG:" << std::endl;
  std::cout << std::endl;
  const Dog* origdog = new Dog();
  origdog->getBrain()->setIdea(0, "this is a dogs bad idea");
  Dog* copydog = new Dog();
  *copydog = *origdog;
  std::cout << copydog->getBrain()->getIdea(0) << std::endl;
  copydog->getBrain()->setIdea(0, "this is a dogs good idea");
  std::cout << copydog->getBrain()->getIdea(0) << std::endl;

  delete origdog;
  delete copydog;

  // // free all animals from array
  // std::cout << std::endl;
  // std::cout << "FREEEEEEE:" << std::endl;
  // std::cout << std::endl;
  // for (int i = 0; i < n; i++) {
  //   delete animals[i];
  // }

  return 0;
}
