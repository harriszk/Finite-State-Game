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

/**
 * TODO: Add documentation
 * 
 */
class Node {
    public:
        /**
         * TODO: Add documentation
         * 
         * @return Node* 
         */
        virtual Node * process() = 0;

        //virtual void addLink(Node * node) = 0;

        virtual void addLeft(Node * node) = 0;

        virtual void addRight(Node * node) = 0;

        /**
         * TODO: Add documentation
         * 
         */
        std::vector<Node *> connections;
}; // end Node class

#endif