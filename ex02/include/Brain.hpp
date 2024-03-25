/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:53:19 by bazuara           #+#    #+#             */
/*   Updated: 2024/03/25 12:58:36 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>
#include <string>

class Brain {
 private:
  std::string ideas[100];

 public:
  Brain();
  ~Brain();

  Brain(const Brain& other);
  Brain& operator=(const Brain& other);

  std::string getIdea(int index);
  void setIdea(int index, std::string idea);
};

#endif  // BRAIN_HPP_
