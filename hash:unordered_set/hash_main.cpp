#include <iostream>
#include "hash_table.h"

int main() {
    // Create a hash table with a size of 10
    hash_table myHashTable(10);

    // Insert elements into the hash table
    myHashTable.insert(5);
    myHashTable.insert(15);
    myHashTable.insert(25);
    myHashTable.insert(35);
    myHashTable.insert(45);

    // Print the contents of the hash table
    myHashTable.print();

    return 0;
}
