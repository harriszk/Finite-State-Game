/**
 * @file driver.cpp
 * Created on 08/26/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#include "include/Graph.h"
#include "include/HealthNode.h"
#include "include/TravelNode.h"
#include "include/SleepNode.h"
#include "include/Character.h"

int main()
{
    Character me("Zachary");

    HealthNode wakeUp(me, "Wake Up", "You wake up from a deep sleep", 0);
    HealthNode shower(me, "Shower", "You take a shower.", 3);
    HealthNode brushTeeth(me, "Brush Teeth", "You brush your teeth.", 2);
    HealthNode restroom(me, "Use the Restroom", "You relieve yourself.", 4);
    HealthNode eat(me, "Eat some food", "You eat a nice sandwich.", 6);
    HealthNode relax(me, "Relax", "You watch some YouTube videos.", 2);
    HealthNode changeClothes(me, "Change your clothes", "You changed into a clean shirt and pants.", 2);
    HealthNode study(me, "Study", "You work on your game programming homework.", -3);

    TravelNode goToClass(me, "Go to Class", "You walk to class");
    TravelNode goToWork(me, "Go to Work", "You drive to your job packing boxes");
    TravelNode goHome(me, "Go Home", "You go home.");

    SleepNode sleep(me, &wakeUp);
    //DieNode die(me);

    Graph game(12);

    game.addNode(&shower);
    game.addNode(&brushTeeth);
    game.addNode(&restroom);
    game.addNode(&eat);
    game.addNode(&relax);
    game.addNode(&changeClothes);
    game.addNode(&goToClass);
    game.addNode(&goToWork);
    game.addNode(&goHome);
    game.addNode(&wakeUp);
    game.addNode(&sleep);
    game.addNode(&study);

    game.addEdge(0,1);
    game.addEdge(0,2);
    game.addEdge(0,3);
    game.addEdge(0,4);
    game.addEdge(0,5);
    game.addEdge(0,6);
    game.addEdge(0,7);
    game.addEdge(0,10);
    game.addEdge(0,11);

    game.addEdge(1,0);
    game.addEdge(1,2);
    game.addEdge(1,3);
    game.addEdge(1,4);
    game.addEdge(1,5);
    game.addEdge(1,6);
    game.addEdge(1,7);
    game.addEdge(1,10);
    game.addEdge(1,11);
    
    game.addEdge(2,0);
    game.addEdge(2,1);
    game.addEdge(2,3);
    game.addEdge(2,4);
    game.addEdge(2,5);
    game.addEdge(2,6);
    game.addEdge(2,7);
    game.addEdge(2,10);
    game.addEdge(2,11);

    game.addEdge(3,0);
    game.addEdge(3,1);
    game.addEdge(3,2);
    game.addEdge(3,4);
    game.addEdge(3,5);
    game.addEdge(3,6);
    game.addEdge(3,7);
    game.addEdge(3,10);
    game.addEdge(3,11);

    game.addEdge(4,0);
    game.addEdge(4,1);
    game.addEdge(4,2);
    game.addEdge(4,3);
    game.addEdge(4,5);
    game.addEdge(4,6);
    game.addEdge(4,7);
    game.addEdge(4,10);
    game.addEdge(4,11);

    game.addEdge(5,0);
    game.addEdge(5,1);
    game.addEdge(5,2);
    game.addEdge(5,3);
    game.addEdge(5,4);
    game.addEdge(5,6);
    game.addEdge(5,7);
    game.addEdge(5,10);
    game.addEdge(5,11);

    game.addEdge(6,8);
    game.addEdge(7,8);

    game.addEdge(8,0);
    game.addEdge(8,1);
    game.addEdge(8,2);
    game.addEdge(8,3);
    game.addEdge(8,4);
    game.addEdge(8,6);
    game.addEdge(8,7);
    game.addEdge(8,10);
    game.addEdge(8,11);

    game.addEdge(9,1);
    game.addEdge(9,2);
    game.addEdge(9,3);
    game.addEdge(9,4);
    game.addEdge(9,5);
    game.addEdge(9,6);
    game.addEdge(9,7);
    game.addEdge(9,10);
    game.addEdge(9,11);

    game.addEdge(11,0);
    game.addEdge(11,1);
    game.addEdge(11,2);
    game.addEdge(11,3);
    game.addEdge(11,4);
    game.addEdge(11,5);
    game.addEdge(11,6);
    game.addEdge(11,7);
    game.addEdge(11,10);

    game.traverseGraph(9);

    std::cout << "HERE\n";

    return 0;
} // end main