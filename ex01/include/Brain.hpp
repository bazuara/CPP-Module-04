/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:53:19 by bazuara           #+#    #+#             */
/*   Updated: 2024/02/15 19:35:56 by bazuara          ###   ########.fr       */
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
  std::string getIdea(int index);
  void setIdea(int index, std::string idea);
};

#endif  // BRAIN_HPP_
