/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:00:07 by root              #+#    #+#             */
/*   Updated: 2025/06/27 18:06:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &toCopy)
{
    std::stack<double> tmp = toCopy._data;
    std::stack<double> reversed;
    while (!tmp.empty()) {
        reversed.push(tmp.top());
        tmp.pop();
    }
    while (!reversed.empty()) {
        _data.push(reversed.top());
        reversed.pop();
    }
}

RPN::~RPN() {}

RPN& RPN::operator=(RPN const &copy)
{
    if (this != &copy) {
        std::stack<double> tmp = copy._data;
        std::stack<double> reversed;
        while (!tmp.empty()) {
            reversed.push(tmp.top());
            tmp.pop();
        }
        while (!_data.empty())
            _data.pop();
        while (!reversed.empty()) {
            _data.push(reversed.top());
            reversed.pop();
        }
    }
    return *this;
}

bool RPN::isOperator(char const c) const
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

void RPN::doTheMaths(char const c)
{
    if (_data.size() < 2)
        throw std::invalid_argument("Error: insufficient data for operation.");

    double b = _data.top(); _data.pop();
    double a = _data.top(); _data.pop();
    double result;

    switch (c)
    {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b == 0.0)
                throw std::invalid_argument("Error: cannot divide by 0.");
            result = a / b; break;
        default:
            throw std::invalid_argument("Error: unknown operator.");
    }

    _data.push(result);
}

void RPN::processInput(std::string const &input)
{
    std::istringstream iss(input);
    std::string token;

    try
    {
        while (iss >> token)
        {
            if (token.size() == 1 && isOperator(token[0]))
            {
                doTheMaths(token[0]);
            }
            else
            {
                // On accepte uniquement les entiers
                for (size_t i = 0; i < token.size(); ++i) {
                    if (!std::isdigit(token[i]))
                        throw std::invalid_argument("Error: invalid token \"" + token + "\"");
                }

                double value = std::strtod(token.c_str(), NULL);
                _data.push(value);
            }
        }

        if (_data.size() != 1)
            throw std::invalid_argument("Error: invalid RPN expression.");

        std::cout << _data.top() << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
