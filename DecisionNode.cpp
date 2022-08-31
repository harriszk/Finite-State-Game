/**
 * @file DecisionNode.cpp
 * Created on 08/27/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#include "DecisionNode.h"
#include <iostream>

DecisionNode::DecisionNode(int val):
    value(val)
{

} // end default constructor

DecisionNode::~DecisionNode(void)
{

} // end destructor

void DecisionNode::addLeft(Node * node)
{
    left = node;
}

void DecisionNode::addRight(Node * node)
{
    right = node;
}

Node * DecisionNode::process()
{
    int choice; 

    std::cout << "You are currently at " << value << "\nMove Left (1) or Right (2)?: ";
    std::cin >> choice;

    if(choice == 1) {
        return left;
    }

    return right;
} // end process
