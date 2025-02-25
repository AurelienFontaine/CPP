/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:13:04 by root              #+#    #+#             */
/*   Updated: 2025/02/25 17:20:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

class Span 
{
    private:
        unsigned int        _maxSize;
        std::vector<int>    _numbers;

    public:
        Span(unsigned int N);
        Span(const Span &copy);
        Span &operator=(const Span &copy);
        ~Span();
    
};

#endif
