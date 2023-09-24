#include <iostream>
#include "List.h"

int main() {
    // Create a List of integers
    List<int> myList;

    // Add elements to the list
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    // Print the list
    std::cout << "List elements: ";
    myList.print();

    // Access and print the front and back elements
    std::cout << "Front element: " << myList.front() << std::endl;
    std::cout << "Back element: " << myList.back() << std::endl;

    // Remove an element from the back
    myList.pop_back();

    // Insert an element at a specific position
    myList.insert(1, 4);

    // Print the modified list
    std::cout << "Modified list: ";
    myList.print();

    // Remove an element from the front
    myList.pop_front();

    // Print the list after removing the front element
    std::cout << "List after pop_front: ";
    myList.print();

    // Erase an element at a specific position
    myList.erase(1);

    // Print the list after erasing an element
    std::cout << "List after erase: ";
    myList.print();


    // Clean up the list
    myList.clean();

    return 0;
}
