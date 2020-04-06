//
//  main.cpp
//  HelloWorld
//
//  Created by Vikram Singh on 12/27/19.
//  Copyright © 2019 Vikram Singh. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Fibonacci.hpp"

struct Node{
    struct Node* left;
    struct Node* right;
    int value;
};

struct Node* CreateNode(int value)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    if(temp)
    {
        temp->left = nullptr;
        temp->right = nullptr;
        temp->value = value;
    }
    return temp;
}

// Traverse the BST in inorder.
/*
 In case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing
 order. To get nodes of BST in non-increasing order, a variation of Inorder traversal
 where Inorder traversal s reversed can be used.
 1- Traverse the left
 2- Print the value
 3- Traverse the right
 */
void InOrder(struct Node* root, int indent=0)
{
    if(root)
    {
        InOrder(root->left, indent+4);
        //std::cout << std::setw(indent) << '/' << std::endl;
        std::cout <<  root->value << std::endl;
        InOrder(root->right);
    }
}
/*
 Postorder traversal is used to delete the tree
 1- Traverse the right
 2- traverse the left
 3- Print the value
 */
void PostOrder(struct Node* node)
{
    if(node)
    {
        PostOrder(node->right);
        std::cout << node->value << std::endl;
        PostOrder(node->left);
    }
}

/*
 visit the root
 traverse left
 traverse right
 */

void PreOrder(struct Node* node)
{
    if(node)
    {
        std::cout << node->value << std::endl;
        PreOrder(node->left);
        PreOrder(node->right);
    }
}

struct Node* AddNode(struct Node* node, int value)
{
    
    if(not node)
    {
        return CreateNode(value);
    }
    if(value < node->value)
    {
        node->left = AddNode(node->left, value);
    }
    else
    {
        node->right = AddNode(node->right, value);
    }
    return node;
}

int maxLevel(struct Node* node)
{
    if(not node)
    {
        return 0;
    }
    return 1 + std::max(maxLevel(node->left), maxLevel(node->right));
}

struct Node* find_min_value_node(struct Node* node)
{
    struct Node* temp = node;
    while(temp and temp->left)
    {
        temp = temp->left;
    }
    return temp;
}
// Delete the Node and return the new root.

struct Node* deleteaNode(struct Node* node, int value)
{
    if(not node)
    {
        return node;
    }
    if(value < node->value)
    {
        //Look into the left subtree
        node->left = deleteaNode(node->left, value);
    }
    else if(value > node->value)
    {
        // Key must be in right subtree
        node->right = deleteaNode(node->right, value);
    }
    else{
    // Found the key to delete.
        // Node with only one child.
        if(not node->left)
        {
            struct Node* tmp = node->right;
            free(node);
            return tmp;
        }
        if(not node->right)
        {
            struct Node* tmp = node->left;
            free(node);
            return tmp;
        }
        // Node with 2 child.
        // Get the smallest node from right subtree
        struct Node* temp = find_min_value_node(node->right);
        node->value = temp->value;
        node->right = deleteaNode(node->right,temp->value);
    }
    return node;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Worldd!\n";
    /*
        10
       /  \
     20     30
    /   \
   40   50
     */
    struct Node* root = nullptr;
    //root = AddNode(root,10);
    root = CreateNode(10);
    
    AddNode(root,8 );
    AddNode(root,30);
    AddNode(root, -6);
    AddNode(root, 50);
    AddNode(root, 4);
    AddNode(root, 90);
    AddNode(root, 100);
    
    std::cout << "Max Level = " << maxLevel(root) << std::endl;
    std::cout << "\nInOrder\n";
    InOrder(root);
    deleteaNode(root,-6);
    std::cout << "\nInOrder\n";
    InOrder(root);
// std::cout << "\nPreOrder\n";
  //  PreOrder(root);
    //std::cout << "\nPostOrder\n";
    //PostOrder(root);
    int number = 50;
    auto start = std::chrono::system_clock::now();
    std::cout << "Fib of " << number << " = " << fib(number) << std::endl;
    
    std::chrono::duration<double> diff = std::chrono::system_clock::now() - start;
    std::cout << "fib1 Time took= "  << diff.count();
    start = std::chrono::system_clock::now();
    std::cout << "\nFib2 of " << number << " = " << fib2(number) << std::endl;
    
    diff = std::chrono::system_clock::now() - start;
    std::cout << "\n Fib2 Time took="  << diff.count();
    return 0;
}
