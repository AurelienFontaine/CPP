/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:34:48 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 23:24:20 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string.h>
#include <iostream>

class Brain
{
    public :
        Brain(void);
        Brain(Brain &Tocopy);
        Brain& operator=(Brain &Tocopy);
        ~Brain(void);
		
        std::string _ideas[100];
};

#endif