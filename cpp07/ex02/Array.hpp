/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 01:17:36 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/10 01:24:34 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
    T *arr;
    unsigned int s;
    public:
    Array()
    {
        s = 0;
        arr = new T;
    }
    Array(unsigned int n)
    {
        s = n;
        arr = new T[n];
    }
    Array (const Array &a)
    {
        this->s = a.s;
        this->arr = new T[this->s];
        for (unsigned int i = 0; i < this->s; i++)
                this->arr[i] = a.arr[i];
    }

    Array &operator=(const Array &a)
    {
        if (this != &a)
        {
            delete [] arr;
            this->s = a.s;
            this->arr = new T[s];
            for (unsigned int i = 0; i < s; i++)
                this->arr[i] = a.arr[i];
        }
        return (*this);
    }

    class WrongIndexing : public std::exception
    {
        public:
        const char * what () const throw ()
        {
            return "Wrong indexing\n";
        }
    };

    T &operator[](int i)
    {
        if (i >= (int)s || i < 0)
            throw WrongIndexing();
        return (arr[i]);
    }

    unsigned int size() const
    {
        return (s);
    }

    ~Array()
    {
        delete [] arr;
    }
     
};




#endif