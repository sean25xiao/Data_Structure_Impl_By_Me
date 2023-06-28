#ifndef _GRAPH_  // Header Guard
#define _GRAPH_

#include <iostream>
#include <vector>
#include <list>

using namespace std;

struct edge_t {
    int src;
    int dest;
    //int weight  // in the future
    edge_t() {};
    edge_t(int _src, int _dest)
        : src(_src), dest(_dest) 
    {};
};

class c_MyGraph
{
private:
    vector< list<int> > adj_list;
    int num_nodes;

public:
    c_MyGraph()
        : num_nodes{0} {};

    c_MyGraph(int n)
        : num_nodes{n} {};

    /* How we create a Graph here:
     * Create a set of edge_t in a vector firstly in test files
     * ie. { {0,1}, {1,2}, {0,3}, {2,3} }
     * Then pass the vector and number of nodes to createGraphInAList() function
     */
    void createGraphInAList(int _n, vector<edge_t> _edges); // create graph in Adjacency List format
    void createGraphInAMatrix(); // create graph in Adjacency Matrix formate

    int getNumNodes() const { return num_nodes; };
    void setNumNodes(int _n) { num_nodes = _n; };

    void printAList() const;

};

#endif // #define _GRAPH_