/**
 * @file HealthNode.h
 * Created on 09/09/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#ifndef _HEALTH_NODE_H_
#define _HEALTH_NODE_H_

#include "ActionNode.h"

class HealthNode : public ActionNode {
    public:
        HealthNode(Character &player, std::string title, std::string description, int increase_value);

        ~HealthNode();

        Node * process();

    private:
        std::string description;

        int increase_value;
}; // end HealthNode

#include "../src/HealthNode.cpp"


#endif