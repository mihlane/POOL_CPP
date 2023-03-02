/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:13 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/02 20:38:02 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class bureaucrat
{
private:
    std::string const name;
    int grade;
public:
    bureaucrat(std::string name, int grade);
    ~bureaucrat();
    std::string getName(void) const
    {
        return (name);
    }
    int getGrade(void) const
    {
        return (grade);
    }
    void    increment(void)
    {
        this->grade++;
    }
    void    decrement(void)
    {
        this->grade--;
    }
    bureaucrat& bureaucrat::operator=(const bureaucrat& other);
};

bureaucrat& bureaucrat::operator=(const bureaucrat& other)
{
        this->grade = other.getGrade();
    return *this;
}
bureaucrat::bureaucrat(std::string name, int grade) : name(name)
{
    std::cout << "Constructor called\n";
    // this->name = name;
    this->grade = grade;
}



bureaucrat::~bureaucrat()
{
    std::cout << "destructor called\n";
}
 std::ostream & operator<<(std::ostream & o, bureaucrat const & rhs)
    {
    	o << rhs.getName() << " , " << rhs.getGrade();
    	return o;
    }

#endif