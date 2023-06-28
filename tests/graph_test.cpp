#include <iostream>
#include <vector>
#include <assert.h>
#include <gtest/gtest.h>
#include "../ds_src/graph.h"
//#include "sorter_test_vector.h"

using namespace std;

TEST(GraphAdjListTest, posSmallNum)
{
    c_MyGraph mg(5);
    EXPECT_EQ(5, mg.getNumNodes());
}

// Test Drive
int main (int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    vector<edge_t> edges;
    int num_nodes = 6;
    edge_t e;
    //e.src  = 0;
    //e.dest = 1;
    edges.push_back(edge_t(0, 1));
    e.src  = 0;
    e.dest = 4;
    edges.push_back(e);
    e.src  = 4;
    e.dest = 3;
    edges.push_back(e);
    e.src  = 4;
    e.dest = 5;
    edges.push_back(e);
    e.src  = 3;
    e.dest = 5;
    edges.push_back(e);
    e.src  = 1;
    e.dest = 2;
    edges.push_back(e);
    e.src  = 2;
    e.dest = 3;
    edges.push_back(e);
    c_MyGraph mg(num_nodes);
    mg.createGraphInAList(num_nodes, edges);
    mg.printAList();

    return RUN_ALL_TESTS();
}