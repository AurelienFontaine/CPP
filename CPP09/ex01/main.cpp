/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:31:26 by afontain          #+#    #+#             */
/*   Updated: 2025/06/27 18:05:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void test(std::string const& input, std::string const& expected)
{
    std::cout << "Test input: \"" << input << "\"\n";
    std::cout << "Expected: " << expected << "\n";
    std::cout << "Result: ";
    RPN rpn;
    rpn.processInput(input);
    std::cout << "----------------------------\n";
}

int main(int ac, char **av)
{
    // (void)av;
    if (ac != 2)
        return (std::cerr << "Error: bad input. Tuto: ./RPN \".....\"" << std::endl, 1);
    RPN rpn;
    rpn.processInput(av[1]);
    
    // // Tests valides
    // test("3 4 /", "");
    // test("3 4 + 2 *", "14");
    // test("5 1 2 + 4 * + 3 -", "14"); // équivaut à 5 + ((1 + 2) * 4) - 3

    // // Division
    // test("8 4 / 3 + 7 / ", "5/7");

    // // Tests invalides
    // test("4 +", "Error: insufficient data for operation.");
    // test("3 0 /", "Error: cannot divide by 0.");
    // test("3 5 + +", "Error: insufficient data for operation.");
    // test("2 3 4", "Error: invalid RPN expression."); // reste plusieurs éléments
    // test("a b +", "Error: bad input: a b +");
    // test("3 4 &", "Error: bad input: 3 4 &");

    return 0;
}
