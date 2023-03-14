/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 01:17:36 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/14 02:05:55 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
    T *arr;
    unsigned int s;
    public:
    Array()
    {
        s = 0;
        arr = new T[s];
    }
    Array(unsigned int n)
    {
        s = n;
        arr = new T[n];
    }
    Array (const Array &a)
    {
        this->s = a.s;
        this->arr = new T[s];
        for (unsigned int i = 0; i < s; i++)
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

    T &operator[](unsigned int i)
    {
        if (i >= s)
            throw std::exception();
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