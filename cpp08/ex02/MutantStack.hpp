/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:12:17 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/05/02 12:54:50 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>


template <typename T>

class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {};
        MutantStack(MutantStack const &other) : std::stack<T>(other) {};
        MutantStack &operator=(MutantStack const &other) { std::stack<T>::operator=(other); return (*this); };
        virtual ~MutantStack() {};

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return (std::stack<T>::c.begin()); };
        iterator end() { return (std::stack<T>::c.end()); };
};

#endif