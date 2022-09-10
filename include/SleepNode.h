/**
 * @file SleepNode.h
 * Created on 09/09/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#ifndef _SLEEP_NODE_H_
#define _SLEEP_NODE_H_

#include "ActionNode.h"

class SleepNode : public ActionNode {
    public:
        SleepNode(Character &player, Node * wakeUpNode);

        ~SleepNode();

        Node * process();
}; // end SleepNode 

#include "../src/SleepNode.cpp"

#endif