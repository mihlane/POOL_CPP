/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:18:37 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 03:08:53 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include "AForm.hpp"
#include <fstream>
#include "bureaucrat.hpp"


class ShrubberyCreationForm : public AForm
{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
    void execute(Bureaucrat const & executor) const;
    void beSigned(Bureaucrat const & b);
    int getGradeToSign() const;
    int getGradeToExecute() const;
    std::string getName() const;
    std::string getTarget() const;
    bool getSigned() const;    
};

#endif