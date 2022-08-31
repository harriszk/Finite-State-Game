/**
 * @file Graph.cpp
 * Created on 08/31/2022
 * 
 * 
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#include "Graph.h"
#include <iostream>
#include <algorithm>

Graph::Graph(int N):
    num_of_nodes(N)
{

} // end constructor

Graph::~Graph()
{

} // end destructor


void Graph::addNode(Node * node)
{
    // Check if the  number of nodes allowed in the graph has been exceeded.
    if(nodes.size() >= num_of_nodes)
    {
        return;
    } // end if

    // Check if node has already been added to the graph.
    if(std::count(nodes.begin(), nodes.end(), node))
    {
        std::cout << "Element found\n";
        return;
    } // end if

    nodes.push_back(node);
    std::cout << "Added a node to the graph\n";
}

bool Graph::addEdge(int n1, int n2)
{
    if(nodes.size() - 1 < std::max(n1, n2))
    {
        return false;
    }

    nodes[n1]->addLeft(nodes[n2]);
} // end addEdge

void Graph::test()
{
    Node * curr = nodes[0];
    bool keepGoing = true;

    while(keepGoing)
    {
        curr = curr->process();
        if(curr == nullptr)
        {
            std::cout << "pointing at nothing\n";
            keepGoing = false;
        }
    }
} // end test