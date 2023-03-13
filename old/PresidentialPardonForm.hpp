/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:19:18 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 03:07:51 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
        std::string _target;
public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm(void);

        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

        void execute(Bureaucrat const & executor) const;

};

#endif