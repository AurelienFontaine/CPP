/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurelienfontaine <aurelienfontaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:13:49 by aurelienfon       #+#    #+#             */
/*   Updated: 2025/03/07 18:04:53 by aurelienfon      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange(void)
{
    std::cout << "Default Constructor called" << std::endl;
}

~BitcoinExchange(void)
{
    std::cout << "Default Destructor called" << std::endl;
}

BitcoinExchange(const &toCopy)
{
    if (this != &toCopy)
        *this = toCopy;
    std::cout << "BitcoinExchange copy constructor called" << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &toCopy)
{
    _datamap.insert(toCopy._datamap.begin(), toCopy._datamap.end());
    return (*this);
}

int		fillMap(void)
{
    
}

void	printMap(void) const
{
    for (std::map<std::string, float>::const_iterator it = _dataMap.begin(); it != _dataMap.end(); it++)
	{
        std::cout << it->first << ", " << std::fixed << std::setprecision(2) <<  it->second << std::endl;
	}
}

int		recupInput(char *av) const
{
    
}

int		parseValue(float value) const
{
    
}

int		parseDate(std::string date) const
{
    if (checkFormat(date))
        return (1);
    
    int     maxday = 31;
    int     day, month, year;
    char    delim;
    
    std::isstringstream iss(date);
    
    iss >> year >> delim >> month >> delim >> day;
    
    if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1)
        return (2);
    else if (year == 2009 && month == 1 && day < 2)
        return (3);
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        maxday = 30;
    else if (month == 2)
    {
        if (isLeapYear(year) == true)
            maxday = 29;
        else
            maxday = 28;
    }
    if (day > maxDays)
        return 1;
    else
        return 0;
}

bool	isLeapYear(int year) const
{
    return ((year % 4 == 0) && (year % 100 != 0) || (year % 100 == 0))
}

bool	checkFormat(std::string date) const
{
    std::istringstream iss(date);
    std::string year, month, day;

    std::getline(iss, year, '-');
    std::getline(iss, month, '-');
    std::getline(iss, day, '-');

	if (year.empty() || month.empty() || day.empty()) // Verif bien YYYY-MM-DD
		return (true);
	return (false);
}

float	getExchangeRate(const std::string &date) const
{
    std::map<std::string, float>::const_iterator it = _dataMap.lower_bound(date);
	if (it == _dataMap.end())
		return ((--it)->second);
	if (it->first > date)
		it--;
	return (it->second);
}
