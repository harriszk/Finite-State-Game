/**
 * @file Node.h
 * Created on 08/26/2022
 * 
 * TODO: Add documentation
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#ifndef _NODE_H_
#define _NODE_H_

#include <vector>
#include <string>

/**
 * TODO: Add documentation
 * 
 */
class Node {
    public:
        Node(std::string title);

        /**
         * TODO: Add documentation
         * 
         * @return Node* 
         */
        virtual Node * process() = 0;

        /**
         * TODO: Add documentation
         * 
         * @param[in] node 
         */
        void addConnection(Node * node);

        /**
         * TODO: Add documentation
         * 
         */
        std::vector<Node *> connections;

        /**
         * 
         * 
         */
        std::string title;
}; // end Node class

#include "../src/Node.cpp"

#endif