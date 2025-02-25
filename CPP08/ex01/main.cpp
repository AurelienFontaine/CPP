/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:13:36 by afontain          #+#    #+#             */
/*   Updated: 2025/02/25 17:22:53 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int main() {
    Span sp(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    // Test avec un grand nombre de valeurs
    Span bigSpan(10000);
    std::vector<int> values;
    for (int i = 0; i < 10000; ++i)
        values.push_back(i * 2);
    
    bigSpan.addNumbers(values.begin(), values.end());

    std::cout << "Big test - Shortest span: " << bigSpan.shortestSpan() << std::endl;
    std::cout << "Big test - Longest span: " << bigSpan.longestSpan() << std::endl;

    return 0;
}
