/**
 * @file DecisionNode.h
 * Created on 08/27/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#ifndef _DECISION_NODE_H_
#define _DECISION_NODE_H_

#include "Node.h"

class DecisionNode : public Node {
    public:
        DecisionNode(int val);

        ~DecisionNode(void);

        Node * process();

        void addLeft(Node * node);

        void addRight(Node * node);

    private:
        int value;

        Node * left = nullptr;

        Node * right = nullptr; 
}; // end DecisionNode

#include "DecisionNode.cpp"

#endif