/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:38:09 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/03 16:21:26 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

# include <iostream>

class Form
{
    private:
    std::string const name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;
    public:
    Form();
    ~Form();
    Form(std::string name, int gradeToSign, int gradeToExecute);
};
#endif