/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 00:20:14 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/05 16:07:40 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int check_number( phonebook &a, int k)
{
    std::string  number;
    while (1)
    {
        if (std::cin.eof())
            exit(0);
        else if (!std::cin.eof())
        {
            std::getline(std::cin, number);
            if (std::cin.eof())
                exit(1);
            int i = 0;
            // b.set_name(number);
            int z = 0;
            while(i < (int)number.size())
            {
                if (isdigit(number[i]) != 0)
                    z++;
                i++;
            }
            if (z != i)
                return (0);
            if (z == (int)number.size() && z != 0)
            {
                a.c_set(k, 5, number);
                // a.b[k].set_number(atoi(number.c_str()));
                break;
            }
            std::cout << "try again\n";
        }
    }
    return (1);
    // for (int i = 0;i < number.size();i++)
    //     if (std::isalnum(number[i])!= 0)
    //         return -1;
    //         return (0);
    //         std::string number
}

void     get_name(phonebook &a, int i, int j)
{
    std::string name;
    while (1)
    {
        if (std::cin.eof())
            exit(0);
        else if (!std::getline(std::cin, name).eof())
        {
            std::getline(std::cin, name);
            if (name.size() == 0)
                std::cout << "try again \n";
            else
            {            
                a.c_set(i, j,name);
                break;
            }
        }
    }
}
void    fill_phonebook(phonebook &a, int i)
{
    std::string str;
        std::cout << "first name: ";
        get_name(a, i, 1);
        std::cout << "last name: ";
        get_name(a, i, 2);
        std::cout << "nickname: ";
        get_name(a, i, 3);
        std::cout << "darkest secret: ";
        get_name(a, i, 4);
        std::cout << "phone number: ";
        while(check_number( a, i) == 0)
            std::cout << "try to write just digits\n";
}
void    print_ten(std::string str)
{
    int i  = 0;
    while (str[i])
    {
        if (i == 8)
        {
            std::cout <<".";
            std::cout << "|";
            return;
        }
        std::cout << str[i];
        i++;
    }
    while (i++ < 9)
        std::cout << " ";
    std::cout << "|";
}
void    get_list(phonebook a)
{
    int z = 0;
    int i ;
    std::string str2;
    std::cout << "index    |";
    std::cout << "first_n  |";
    std::cout << "last_name|";
    std::cout << "nickname |" << std::endl;
    while(z < 8)
    {
        i = 1;
        str2 = a.c_get(z, 1);
        if (str2.size() == 0)
            break;
                std::cout << z << "        |";
            while (i < 4)
            {
                print_ten(a.c_get(z,i));
                i++;
            }
            std::cout << std::endl;
        z++;
    }
        std::cout << "choose the index of your contact\n";
        while (1)
        {
            if (std::cin.eof())
                exit(0);
            else if (!std::cin.eof())
            {
                std::getline(std::cin, str2);
                i = atoi(str2.c_str());
                if (i >= 0 && i <= 8)
                {
                    str2 = a.c_get(i, 1);
                    if (str2.size() == 0)
                        break;
                    std::cout << a.c_get(i, 1) << std::endl;
                    std::cout << a.c_get(i, 2) << std::endl;
                    std::cout << a.c_get(i, 3) << std::endl;
                    std::cout << a.c_get(i, 4) << std::endl;
                    std::cout << a.c_get(i, 5) << std::endl;
                break;
                }
                else 
                    std::cout << "try again with correct index\n";
            }
        }
}
int main()
{
    phonebook a;
    int i = 0;
    std::string firstName;

    std::cout << "choose 'ADD' or 'SEARCH' or 'EXIT'\n";
    while (1)
    {
        if (std::cin.eof())
            exit(0);
        std::getline(std::cin, firstName);
        if ( firstName == "ADD")
        {
            fill_phonebook(a, i);
            i++;
            if (i == 8)
                i = 0;
        }
        else if ( firstName == "SEARCH")
                get_list(a);
        else if ( firstName == "EXIT")
            exit(0);
        else if (!std::cin.eof())
            std::cout << "choose 'ADD' or 'SEARCH' or 'EXIT'\n";
        
    }
    return (0);
}