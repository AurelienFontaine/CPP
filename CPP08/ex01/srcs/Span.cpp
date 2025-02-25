/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:17:33 by root              #+#    #+#             */
/*   Updated: 2025/02/25 17:19:48 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span(unsigned int N) : _maxSize(N) 
{
    
}

Span(const Span &copy)
{
    *this = copy;
}

Span &operator=(const Span &copy)
{
    if (this == &copy)
        return *this;
    _maxSize = copy._maxSize;
    _numbers = copy._numbers;
    return *this;
}

~Span()
{
    _numbers.clear();
}

void addNumber(int number) 
{
    if (_numbers.size() >= _maxSize)
        throw std::overflow_error("Span is already full");
    _numbers.push_back(number);
}

template <typename Iterator>
void addNumbers(Iterator begin, Iterator end) 
{
    if (std::distance(begin, end) > static_cast<int>(_maxSize - _numbers.size()))
        throw std::overflow_error("Not enough space to add all numbers");
    _numbers.insert(_numbers.end(), begin, end);
}

int shortestSpan() const {
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    std::vector<int> sortedNumbers = _numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    int minSpan = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 1; i < sortedNumbers.size() - 1; ++i)
        minSpan = std::min(minSpan, sortedNumbers[i + 1] - sortedNumbers[i]);
    return minSpan;
}

int longestSpan() const 
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    return *std::max_element(_numbers.begin(), _numbers.end()) -
           *std::min_element(_numbers.begin(), _numbers.end());
}