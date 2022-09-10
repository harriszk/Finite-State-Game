/**
 * @file TravelNode.cpp
 * Created on 08/27/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#include "../include/TravelNode.h"
#include <iostream>

TravelNode::TravelNode(Character &player, std::string title, std::string description):
    ActionNode(title, player)
{

} // end default constructor

TravelNode::~TravelNode()
{

} // end destructor

Node * TravelNode::process()
{
    int next_move;
    std::cout << "You travel to some location\n";

    degradation();

    std::cout << "Current HP: " << this->player.getHealth() << std::endl;
    next_move = chooseMove();

    if(next_move == -1) {
        return nullptr;
    } else if(next_move == -2) {
        
    } // end if

    return this->connections[next_move];
} // end process
