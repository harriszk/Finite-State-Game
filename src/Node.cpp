/**
 * @file Node.cpp
 * Created on 09/08/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#include "../include/Node.h"

Node::Node(std::string title):
    title(title)
{

} // end default constructor

void Node::addConnection(Node * node) 
{
    this->connections.push_back(node);
} // end addConnection