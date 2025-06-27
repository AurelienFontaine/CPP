/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:31:16 by afontain          #+#    #+#             */
/*   Updated: 2025/06/27 18:06:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cstdlib>
#include <exception>

class RPN
{
    private:
        std::stack<double> _data;
        
        // bool    isInputValid(std::string const &input) const;
        bool    isOperator(char const c) const;
        void    doTheMaths(char const c);
        
    public:
        RPN();
        RPN(RPN const &toCopy);
        ~RPN();
        RPN&    operator=(RPN const &copy);

        void    processInput(std::string const &input);
};

#endif