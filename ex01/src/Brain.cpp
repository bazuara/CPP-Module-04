/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:56:20 by bazuara           #+#    #+#             */
/*   Updated: 2024/02/15 18:57:45 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain() {
  std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
  std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int index) {
  return ideas[index];
}

void Brain::setIdea(int index, std::string idea) {
  ideas[index] = idea;
}
