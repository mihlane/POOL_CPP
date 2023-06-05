/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:16:38 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/05/20 03:25:00 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>

class BitcoinExchange
{
    std::map<int , int> maps;
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange (const BitcoinExchange &a);
    BitcoinExchange &operator = (const BitcoinExchange &a);
    void    fill_map(void);
};

#endif