/**
 * @file SleepNode.cpp
 * Created on 09/09/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#include "../include/SleepNode.h"

SleepNode::SleepNode(Character &player, Node * wakeUpNode):
    ActionNode("Sleep", player)
{
    addConnection(wakeUpNode);
} // end default constructor

SleepNode::~SleepNode()
{

} // end destructor

Node * SleepNode::process()
{
    std::cout << "You fall asleep for 8 hours.\n";

    int heal;
    int cur_ticks = this->player.getTicks();
    int cur_health = this->player.getHealth();
    int ticks_till_next = cur_ticks % TICKS_PER_DAY;

    this->player.setTicks(cur_ticks + ticks_till_next);

    if(ticks_till_next == 0) {
        heal = std::floor(0.2 * (this->player.getMexHealth() - cur_health));
    } else {
        heal = std::floor(0.9 * (this->player.getMexHealth() - cur_health));
    } // end if

    this->player.setHealth(cur_health + heal);

    return this->connections[0];
} // end process