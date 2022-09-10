/**
 * @file HealthNode.cpp
 * Created on 09/09/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#include "../include/HealthNode.h"

HealthNode::HealthNode(Character &player, std::string title, std::string description, int increase_value):
    ActionNode(title, player),
    description(description),
    increase_value(increase_value)
{

} // end initializing constructor

HealthNode::~HealthNode()
{
    for (auto node : this->connections)
    {
        delete node;
    } 
    this->connections.clear();
} // end destructor

Node * HealthNode::process()
{
    int next_move;
    int increased = this->player.getHealth() + this->increase_value;

    std::cout << this->description << "\n";

    if(this->player.getMexHealth() <= increased)
    {
        increased = this->player.getMexHealth();
    } // end if

    this->player.setHealth(increased);
    degradation();

    std::cout << "Current HP: " << this->player.getHealth() << std::endl;
    next_move = chooseMove();

    if(next_move == -1) {
        return nullptr;
    } else if(next_move == -2) {
        return nullptr;
    } // end if

    return this->connections[next_move];
} // end process