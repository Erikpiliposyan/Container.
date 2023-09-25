#include <iostream>
#include "queue.h"

int main() {
    // Using the queue with integers
    queue<int> intQueue;
    intQueue.push(1);
    intQueue.push(2);
    intQueue.push(3);

    std::cout << "Top element of intQueue: " << intQueue.top() << std::endl;
    std::cout << "Bottom element of intQueue: " << intQueue.down() << std::endl;

    intQueue.pop();
    std::cout << "Top element of intQueue after pop: " << intQueue.top() << std::endl;

    return 0;
}
