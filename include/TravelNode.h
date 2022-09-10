/**
 * @file TravelNode.h
 * Created on 08/27/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#ifndef _TRAVEL_NODE_H_
#define _TRAVEL_NODE_H_

#include "Node.h"

class TravelNode : public ActionNode {
    public:
        TravelNode(Character &player, std::string title, std::string description);

        ~TravelNode();

        Node * process();

    private:

}; // end TravelNode

#include "../src/TravelNode.cpp"

#endif