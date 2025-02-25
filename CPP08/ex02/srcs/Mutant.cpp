/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutant.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:23:05 by root              #+#    #+#             */
/*   Updated: 2025/02/25 17:29:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Mutant.hpp"

iterator begin() { return this->c.begin(); }

iterator end() { return this->c.end(); }

const_iterator begin() const { return this->c.begin(); }

const_iterator end() const { return this->c.end(); }

reverse_iterator rbegin() { return this->c.rbegin(); }

reverse_iterator rend() { return this->c.rend(); }

const_reverse_iterator rbegin() const { return this->c.rbegin(); }

const_reverse_iterator rend() const { return this->c.rend(); }
