/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:16:38 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/15 04:35:30 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <cstdlib>

void    print_error(std::string str);
int    check_date(std::string line);
void    print_error2(std::string str);
int    check_pipe_and_after(std::string line);
int    check_valid_date(int day, int month, int year);
void    fill_nums(std::string line, std::map<std::string, double> mapp);
std::map<std::string, double>   get_data(void);

#endif