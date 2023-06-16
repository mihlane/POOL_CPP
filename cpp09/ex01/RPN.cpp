/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 00:18:44 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/15 07:40:27 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void    print_error(std::string err)
{
    std::cout << err << std::endl;
    exit(0);
}

void    push_to_stack(char num, std::stack<int>& rpn)
{
    if (num >= '0' && num <= '9')
        rpn.push(atoi(&num));
    else if (num != ' ')
    {
        if (rpn.size() < 2)
        {
            print_error("no enough numbers in the stack");
        }
        int second = rpn.top();
        rpn.pop();
        int first = rpn.top();
        rpn.pop();
        int result;
        switch (num) {
        case '+':
            result = first + second;
            break;
        case '-':
            result = first - second;
            break;
        case '*':
            result = first * second;
            break;
        case '/':
            if (second != 0)
                result = first / second;
            else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                exit(0);
            }
    }
        rpn.push(result);
    }
}
void    stak(char *calcul)
{
    int i = 0;
    std::stack<int> rpn;
    while (calcul[i])
    {
        if ((calcul[i] < '0' || calcul[i] > '9') && (calcul[i] != '+' && calcul[i] != '-' 
            && calcul[i] != '/' && calcul[i] != '*' && calcul[i] != ' '))
                print_error("Error : wrong characters");
        push_to_stack(calcul[i], rpn);
        i++;
    }
    std::cout << rpn.top() << std::endl;
}