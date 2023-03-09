/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 22:58:29 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/09 00:37:30 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
    private:
    public:
        Intern();
        ~Intern();
        Intern(Intern const & src);
        Intern & operator=(Intern const & src);
        AForm *makeForm(std::string formName, std::string target);
        class UnknownFormException : public std::exception
		{	public:
				const char * what() const throw();};
};

#endif