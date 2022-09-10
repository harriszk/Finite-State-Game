/**
 * @file ActionNode.cpp
 * Created on 09/08/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#include "../include/ActionNode.h"

ActionNode::ActionNode(std::string action, Character &player):
    Node(action),
    player(player)
{

} // end initalizing constructor

void ActionNode::degradation()
{
    this->player.incrementTicks();

    this->player.setHealth(this->player.getHealth() - 5);

    // Health decreases as the player ages.
    // This is done every 7 days.
    if(this->player.getTicks() % (TICKS_PER_DAY * 7) == 0)
    {
        this->player.setMaxHealth(this->player.getMexHealth() - 5);
    } // end if


} // end degradation

int ActionNode::chooseMove()
{
    bool keepGoing = true;
    int choice;
    int number_of_connections = this->connections.size();

    //std::cout << "You are currently at node " << this->description << "\n";

    if(number_of_connections == 0)
    {
        std::cout << "No moves left.\n";
        return -1;
    }

    if(this->player.getHealth() <= 0)
    {
        std::cout << "You have died.\n";
        return -2;
    }

    if(this->player.getTicks() % TICKS_PER_DAY == 0)
    {
        std::cout << "You are exhausted and fall asleep.\n";
        for(int i = 0; i < number_of_connections; i++)
        {
            if(this->connections[i]->title == "Sleep")
            {
                return i;
            }
        }
    } // end if

    // Check how many connections this node has.
    // From that, offer the user that number of
    // options to move to.
    // Return whichever option the user picks.

    for(int i = 0; i < number_of_connections; i++)
    {
        std::cout << i << ") " << this->connections[i]->title << "\n";
    }
    std::cout << "What would you like to do?: ";

    while(keepGoing)
    {
        std::cin >> choice;
        if(choice < number_of_connections)
        {
            keepGoing = false;
        } else {
            std::cout << "That is not a choice. Choose again: ";
        } // end if
    } // end while

    return choice;
} // end chooseMove