/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurelienfontaine <aurelienfontaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:13:46 by aurelienfon       #+#    #+#             */
/*   Updated: 2025/03/07 17:39:20 by aurelienfon      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP 

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>
# include <iomanip>

class BitcoinExchange
{
    private :
            std::map <std::string ,float>   _datamap;

    public :
        BitcoinExchange(void);
        ~BitcoinExchange(void);
        BitcoinExchange(BitcoinExchange const &toCopy);
        BitcoinExchange &operator=(BitcoinExchange const &toCopy);
        
        int		fillMap(void);
		void	printMap(void) const;
		int		recupInput(char *av) const;
		int		parseValue(float value) const;
		int		parseDate(std::string date) const;
		bool	isLeapYear(int year) const;
		bool	checkFormat(std::string date) const;
		float	getExchangeRate(const std::string &date) const;

};

#endif