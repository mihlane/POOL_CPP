/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 00:20:14 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/01/31 13:57:39 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
// #include <cstdlib>

class Contact
{
public:
    std::string first_Name;
    std::string last_Name;
    std::string nickname;
    std::string Company;
    std::string Darkest_secret;
    int phone_number;
    void    set_name(std::string name)
    {
        Name = name;
    }
    std::string get_name()
    {
        return Name;
    }
};
class phonebook
{
    public:
    Contact b[8];
};
int check_number(Contact&habibii)
{
    std::string  number;
    while (1)
    {
        std::cin >> number;
        size_t i = 0;
        // b.set_name(number);
        int z = 0;
        while(i < number.size())
        {
            if (isdigit(number[i]) == 0)
                z++;
            i++;
        }
        if (z == i)
            return (0);
        if (i == number.size())
        {
            habibii.age = atoi(number.c_str());
            break;
        }
    }
    return (1);
    // for (int i = 0;i < number.size();i++)
    //     if (std::isalnum(number[i])!= 0)
    //         return -1;
    //         return (0);
    //         std::string number
}
int    fill_phonebook(Contact&habibii, int i)
{
    
    // Contacthabibii;
    i++;
    std::cout << "ach smak lah\n";
    std::cin >> habibii.Name;
    std::cout << "fin khedam\n";
    std::cin >> habibii.Company;
    std::cout << "ra9m lkhass dyalk\n";
    while (check_number(habibii) == 0)
        std::cout << "ra9m khata2\n";
    printf("salam\n");
    if (i == 8)
        i = 0;
    // i         f (check_number() == 1)
    // std::cout << number << std::endl;
    // std::string.stoi
    return (i);
}
void    get_list(Contact habibii)
{
    if (habibii.Name.size() == 0)
        return;
    std::cout << habibii.Name << std::endl;
    std::cout << habibii.Company << std::endl;
    std::cout << habibii.age << std::endl;
}
int main(int ac, char **av)
{
    Contact habibii[7];
    int i = 0;
    std::string firstName;
    while (1)
    {
        int z = 0;
        std::cin>>firstName;
        if ( firstName.compare("ADD") == 0)
            i = fill_phonebook(habibii[i], i);
        else if ( firstName.compare("SEARCH") == 0)
        {
            while(z < 8)
            {
                get_list(habibii[z]);
                z++;
            }
            // exit(0);
        }
        else if ( firstName.compare("EXIT") == 0)
            exit(0);
        else 
            std::cout << "khtar 'ADD' wla 'SEARCH' WLA 'EXIT'\n";
        
    }
std::string lastName = "Doe";
std::string fullName = firstName.append(lastName);
std::cout << fullName;
}