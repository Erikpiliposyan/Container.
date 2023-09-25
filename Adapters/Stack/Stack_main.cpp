#include <iostream>
#include "Stack.h"

int main() {
    // Using v_stack with integers
    v_stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    std::cout << "Top element of intStack: " << intStack.top() << std::endl;

    intStack.pop();
    std::cout << "Top element of intStack after pop: " << intStack.top() << std::endl;

    // Using l_stack with characters
    l_stack<char> charStack;
    charStack.push('A');
    charStack.push('B');
    charStack.push('C');

    std::cout << "Top element of charStack: " << charStack.top() << std::endl;

    charStack.pop();
    std::cout << "Top element of charStack after pop: " << charStack.top() << std::endl;

    return 0;
}
