/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:56:20 by bazuara           #+#    #+#             */
/*   Updated: 2024/03/25 10:48:31 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain() {
  std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
  std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
  std::cout << "Brain copy constructor called" << std::endl;
  for (int i = 0; i < 100; i++) {
    ideas[i] = other.ideas[i];
  }
}

std::string Brain::getIdea(int index) {
  return ideas[index];
}

void Brain::setIdea(int index, std::string idea) {
  ideas[index] = idea;
}
