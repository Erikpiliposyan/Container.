#include <iostream>
#include "Vector.h"

int main() {
    Vector<int> myVector;
    // Add elements to the Vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Print the Vector
    myVector.print();

    // Access elements using operator[]
    std::cout << "Element at index 1: " << myVector[1] << std::endl;

    // Insert an element at a specific position
    myVector.insert(1, 15);
    myVector.print();

    // Erase an element at a specific position
    myVector.erase(2);
    myVector.print();

    // Check if the Vector is empty
    if (myVector.empty()) {
        std::cout << "Vector is empty." << std::endl;
    } else {
        std::cout << "Vector is not empty." << std::endl;
    }

    // Print the Vector's length
    std::cout << "Vector length: " << myVector.length() << std::endl;

    // Access the first and last elements
    std::cout << "First element: " << myVector.front() << std::endl;
    std::cout << "Last element: " << myVector.back() << std::endl;

    return 0;
}
