/**
 * @file driver.cpp
 * Created on 08/26/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#include "DecisionNode.h"
#include "Graph.h"

int main()
{
    bool keepGoing = true;

    DecisionNode one(1);
    DecisionNode two(2);
    DecisionNode three(3);
    DecisionNode four(4);

    Graph g(4);

    g.addNode(&one);
    g.addNode(&two);
    g.addNode(&three);
    g.addNode(&four);

    g.addEdge(0, 7);

    g.test();

    /*
    while(keepGoing)
    {
        
    } // end while
    */

    return 0;
} // end main