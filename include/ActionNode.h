/**
 * @file ActionNode.h
 * Created on 09/08/2022
 * 
 * TODO: Add documentation
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#ifndef _ACTION_NODE_H_
#define _ACTION_NODE_H_

#include <iostream>
#include "Node.h"
#include "Character.h"

/**
 * @class ActionNode
 * 
 * TODO: Add documentation
 */
class ActionNode : public Node {
    public:
        // Initializing constructor
        ActionNode(std::string action, Character &player);

        void degradation();

        /**
         * 
         * 
         * @return int 
         */
        int chooseMove();

        virtual Node * process() = 0;

    protected:
        Character &player;
}; // end ActionNode

#include "../src/ActionNode.cpp"

#endif