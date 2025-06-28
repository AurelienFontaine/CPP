/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 18:05:01 by afontain          #+#    #+#             */
/*   Updated: 2025/06/28 15:27:50 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <exception>
#include <climits>
#include <vector>
#include <deque>
#include <iostream>
#include <ctime>
#include <stdexcept>
#include <algorithm>
#include <iomanip>

class PmergeMe
{
private:
    std::vector<int> _vector;
    std::deque<int> _deque;

    void parseSequence(char **av);
    int myStoi(const char *str);

    void fordJohnsonV(std::vector<int> &vec);
    void fordJohnsonD(std::deque<int> &de);
    
    void binaryInsertV(std::vector<int> &sortedVec, int value);
    void binaryInsertD(std::deque<int> &sortedDeq, int value);
    
    std::deque<int> generateJacobsthalIndices2(int n);
    std::vector<int> generateJacobsthalIndices(int n);

public:
    PmergeMe();
    PmergeMe(const PmergeMe &toCopy);
    ~PmergeMe();
    PmergeMe &operator=(const PmergeMe &copy);

    void sort(char **av);
};

#endif
