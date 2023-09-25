#include <iostream>
#include "binary_tree.h"

int main() {
    // Create a binary tree of integers
    bin_tree<int> myTree;

    // Insert elements into the tree
    myTree.insert(10);
    myTree.insert(5);
    myTree.insert(15);
    myTree.insert(3);
    myTree.insert(7);
    myTree.insert(12);
    myTree.insert(18);

    // Display the tree in different traversal orders
    std::cout << "Inorder traversal: ";
    myTree.display("inorder");

    std::cout << "Preorder traversal: ";
    myTree.display("preorder");

    std::cout << "Postorder traversal: ";
    myTree.display("postorder");

    std::cout << "Level by level traversal: ";
    myTree.display("level");

    // Calculate the number of levels and leaves in the tree
    int numLevels = myTree.levels();
    int numLeaves = myTree.leaves();

    std::cout << "Number of levels in the tree: " << numLevels << std::endl;
    std::cout << "Number of leaves in the tree: " << numLeaves << std::endl;

    return 0;
}
