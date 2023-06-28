#include <iostream>
#include "graph.h"

using namespace std;

void c_MyGraph::createGraphInAList(int _n, vector<edge_t> _edges)
{
    // Initialize adj_list
    for (int i = 0; i < _n; i++)
    {
        list<int> node_list = {};
        adj_list.emplace_back(node_list);
    }

    for (auto &e : _edges)
    {
        adj_list[e.src].emplace_back(e.dest);
        adj_list[e.dest].emplace_back(e.src);
    }
}

void c_MyGraph::printAList() const
{
    int cnt = 0;
    for (auto &v : adj_list)
    {
        cout << cnt << ": ";
        for (auto &l : v)
        {
            cout << "--> " << l << " ";
        }
        cout << endl;
        cnt++;
    }
}