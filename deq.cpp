/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:51:12 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/12 20:51:14 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque>
#include <iostream>

int main() {
    std::deque<int> numbers;

    // Insert elements at the back
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Insert elements at the front
    numbers.push_front(0);
    numbers.push_front(-1);

    // Accessing elements
    std::cout << "Front element: " << numbers.front() << std::endl; // -1
    std::cout << "Back element: " << numbers.back() << std::endl;   // 3

    // Iterating over the elements
    std::cout << "Elements: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Removing elements from the front and back
    numbers.pop_front();
    numbers.pop_back();

    // Size of the deque
    std::cout << "Size: " << numbers.size() << std::endl; // 3

    return 0;
}