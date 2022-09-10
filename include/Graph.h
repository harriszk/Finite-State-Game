/**
 * @file Graph.h
 * Created on 08/30/2022
 * 
 * TODO: Add documentation
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#ifndef _GRAPH_H_
#define _GRAPH_H_

#include <vector>
#include "Node.h"

/**
 * TODO: Add documentation
 * 
 */
class Graph {
    public:
        /**
         * Construct a new Graph object
         * 
         * @param[in] N 
         */
        Graph(int N);

        /**
         * Destroy the Graph object
         * 
         */
        ~Graph();

        /**
         * TODO: Add documentation
         * 
         * @param[in] node 
         */
        void addNode(Node * node);

        /**
         * TODO: Add documentation
         * 
         * @param[in] n1 
         * @param[in] n2 
         * @return true 
         * @return false 
         */
        bool addEdge(int n1, int n2);

        /**
         * TODO: Add documentation
         * 
         */
        void traverseGraph(int index);

    private:
        /**
         * TODO: Add documentation
         * 
         */
        int num_of_nodes;

        /**
         * TODO: Add documentation
         * 
         */
        std::vector<Node *> nodes;

        /*
        std::vector< std::vector<int> > connections;
        */
}; // end Graph class

#include "../src/Graph.cpp"

#endif