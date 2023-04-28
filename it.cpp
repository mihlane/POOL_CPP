/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   it.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:06:24 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/27 16:10:41 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // Iterate through the vector using a for loop and iterators
    std::cout << "Iterating through the vector using iterators:" << std::endl;
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Move the iterator to a specific position
    // std::vector<int>::iterator it = v.begin() + 2;
    // std::cout << "The value at position 2 is: " << *it << std::endl;

    // // Insert an element at a specific position using the iterator
    // it = v.insert(it, 10);
    // std::cout << "After inserting 10 at position 2, the vector is: ";
    // // for (int x : v) {
    // //     std::cout << x << " ";
    // // }
    // std::cout << std::endl;

    return 0;
}