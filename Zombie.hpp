/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:11:02 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/05 16:19:23 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
        std::string name;
public:
        void    announce(void)
        {
            std::cout << name: << "BraiiiiiiinnnzzzZ..." << std::endl;
        }
};