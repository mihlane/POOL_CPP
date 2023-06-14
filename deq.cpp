/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:51:12 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/14 03:10:30 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque>
#include <iostream>

// int main() {
//     std::deque<int> numbers;

//     // Insert elements at the back
//     numbers.push_back(1);
//     numbers.push_back(2);
//     numbers.push_back(3);

//     // Insert elements at the front
//     numbers.push_front(0);
//     numbers.push_front(-1);

//     // Accessing elements
//     std::cout << "Front element: " << numbers.front() << std::endl; // -1
//     std::cout << "Back element: " << numbers.back() << std::endl;   // 3

//     // Iterating over the elements
//     std::cout << "Elements: ";
//     for (const auto& num : numbers) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     // Removing elements from the front and back
//     numbers.pop_front();
//     numbers.pop_back();

//     // Size of the deque
//     std::cout << "Size: " << numbers.size() << std::endl; // 3

//     return 0;
// }

#include <iostream>
#include <vector>
#include <utility> // for std::pair

int main() {
    std::vector<std::pair<int, int>> myVector;
    myVector.push_back(std::make_pair(1, 2));
    myVector.push_back(std::make_pair(3, 4));
    myVector.push_back(std::make_pair(5, 6));

    // Compare and swap pairs
    // for (size_t i = 0; i < myVector.size(); ++i) {
    //     for (size_t j = i + 1; j < myVector.size(); ++j) {
    //         if (myVector[i] > myVector[j]) {
    //             std::swap(myVector[i], myVector[j]);
    //         }
    //     }
    // }
    while (i < myVector.size()) {
        std::pair<int, int>& pair = myVector[i];
        // Perform operations on the pair or its elements
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
        ++i; // Move to the next element
    }
    // Print the sorted vector of pairs
                                                              
    std::cout << std::endl;

    return 0;
}
