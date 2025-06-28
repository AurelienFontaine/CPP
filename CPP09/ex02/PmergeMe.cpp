/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:52:33 by root              #+#    #+#             */
/*   Updated: 2025/06/28 15:30:45 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &toCopy)
{
    _vector.clear();
    _vector.insert(_vector.end(), toCopy._vector.begin(), toCopy._vector.end());
    _deque.clear();
    _deque.insert(_deque.end(), toCopy._deque.begin(), toCopy._deque.end());
}

PmergeMe::~PmergeMe() {}

PmergeMe&   PmergeMe::operator=(PmergeMe const &copy)
{
    if (this != &copy)
    {
        _vector.clear();
        _vector.insert(_vector.end(), copy._vector.begin(), copy._vector.end());
        _deque.clear();
        _deque.insert(_deque.end(), copy._deque.begin(), copy._deque.end());
    }
    return (*this);
}

int PmergeMe::myStoi(const char *str) {
    int result = 0;

    while (*str == ' ' || *str == '\t') str++;
    if (*str == '+') str++;
    else if (*str == '-') throw std::out_of_range("Negative not allowed");

    while (*str) {
        if (*str < '0' || *str > '9') throw std::invalid_argument("Invalid input");
        int digit = *str - '0';
        if (result > (INT_MAX - digit) / 10) throw std::out_of_range("Overflow");
        result = result * 10 + digit;
        str++;
    }
    return result;
}

void PmergeMe::parseSequence(char **av) {
    for (int i = 1; av[i]; i++) {
        int value = myStoi(av[i]);
        _vector.push_back(value);
        _deque.push_back(value);
    }
}

std::deque<int> PmergeMe::generateJacobsthalIndices2(int n) {
    std::deque<int> j;
    j.push_back(0);
    j.push_back(1);
    while (j[j.size() - 1] < n) {
        int next = j[j.size() - 1] * 2 + j[j.size() - 2];
        j.push_back(next);
    }
    j.pop_back();

    std::deque<int> indices;
    for (size_t i = 0; i < j.size(); ++i)
        indices.push_back(j[i]);

    std::deque<bool> used(n, false);
    for (size_t i = 0; i < indices.size(); ++i)
        if (indices[i] < n)
            used[indices[i]] = true;

    for (int i = 0; i < n; ++i)
        if (!used[i])
            indices.push_back(i);

    return indices;
}


std::vector<int> PmergeMe::generateJacobsthalIndices(int n) {
    std::vector<int> j;
    j.push_back(0);
    j.push_back(1);
    while (j[j.size() - 1] < n) {
        int next = j[j.size() - 1] * 2 + j[j.size() - 2];
        j.push_back(next);
    }
    j.pop_back();

    std::vector<int> indices;
    for (size_t i = 0; i < j.size(); ++i)
        indices.push_back(j[i]);

    std::vector<bool> used(n, false);
    for (size_t i = 0; i < indices.size(); ++i)
        if (indices[i] < n)
            used[indices[i]] = true;

    for (int i = 0; i < n; ++i)
        if (!used[i])
            indices.push_back(i);

    return indices;
}

void PmergeMe::binaryInsertD(std::deque<int> &deq, int value) {
    int left = 0, right = deq.size();
    while (left < right) {
        int mid = (left + right) / 2;
        if (deq[mid] < value) 
            left = mid + 1;
        else 
            right = mid;
    }
    deq.push_back(0); // expand
    for (int i = deq.size() - 1; i > left; --i)
        deq[i] = deq[i - 1];
    deq[left] = value;
}

void PmergeMe::binaryInsertV(std::vector<int> &vec, int value) {
    int left = 0, right = vec.size();
    while (left < right) {
        int mid = (left + right) / 2;
        if (vec[mid] < value) 
            left = mid + 1;
        else 
            right = mid;
    }
    vec.push_back(0); // expand
    for (int i = vec.size() - 1; i > left; --i)
        vec[i] = vec[i - 1];
    vec[left] = value;
}

void PmergeMe::fordJohnsonV(std::vector<int> &vec) {
    int n = vec.size();
    if (n <= 1) 
        return;

    std::vector<std::pair<int, int> > pairs;
    std::vector<int> mainChain, minima;
    mainChain.reserve(n);
    minima.reserve(n / 2);

     for (int i = 0; i + 1 < n; i += 2) 
     {
        if (vec[i] > vec[i + 1]) 
        {
            mainChain.push_back(vec[i]);
            minima.push_back(vec[i + 1]);
        } 
        else 
        {
            mainChain.push_back(vec[i + 1]);
            minima.push_back(vec[i]);
        }
    }
    if (n % 2 == 1)
        minima.push_back(vec[n - 1]);

    fordJohnsonV(mainChain);

    std::vector<int> insertOrder = generateJacobsthalIndices(minima.size());
    for (size_t i = 0; i < insertOrder.size(); ++i) {
        int idx = insertOrder[i];
        if (idx < (int)minima.size())
            binaryInsertV(mainChain, minima[idx]);
    }
    vec = mainChain;
}

void PmergeMe::fordJohnsonD(std::deque<int> &deq) {
    int n = deq.size();
    if (n <= 1) 
        return;

    std::deque<std::pair<int, int> > pairs;
    std::deque<int> mainChain, minima;

     for (int i = 0; i + 1 < n; i += 2) 
     {
        if (deq[i] > deq[i + 1]) 
        {
            mainChain.push_back(deq[i]);
            minima.push_back(deq[i + 1]);
        } 
        else 
        {
            mainChain.push_back(deq[i + 1]);
            minima.push_back(deq[i]);
        }
    }
    if (n % 2 == 1)
        minima.push_back(deq[n - 1]);

    fordJohnsonD(mainChain);

    std::deque<int> insertOrder = generateJacobsthalIndices2(minima.size());
    for (size_t i = 0; i < insertOrder.size(); ++i) {
        int idx = insertOrder[i];
        if (idx < (int)minima.size())
            binaryInsertD(mainChain, minima[idx]);
    }
    deq = mainChain;
}
// void PmergeMe::fordJohnsonD(std::deque<int> &deq) {
//     std::vector<int> tmp(deq.begin(), deq.end());
//     fordJohnsonV(tmp);
//     deq.assign(tmp.begin(), tmp.end());
// }

void PmergeMe::sort(char **av) {
    try {
        parseSequence(av);

        std::cout << "Before: ";
        for (size_t i = 0; i < _vector.size(); i++)
            std::cout << _vector[i] << " ";
        std::cout << std::endl;

        std::clock_t start = std::clock();
        fordJohnsonV(_vector);
        std::clock_t end = std::clock();
        double timeVector = ((double)(end - start)) / CLOCKS_PER_SEC * 1000000.0;

        std::cout << "After: ";
        for (size_t i = 0; i < _vector.size(); i++)
            std::cout << _vector[i] << " ";
        std::cout << std::endl;

        std::cout << std::fixed << std::setprecision(5);
        std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << timeVector << " us" << std::endl;

        start = std::clock();
        fordJohnsonD(_deque);
        end = std::clock();
        double timeDeque = ((double)(end - start)) / CLOCKS_PER_SEC * 1000000.0;

        std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : " << timeDeque << " us" << std::endl;

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}
