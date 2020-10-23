#pragma once

#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>

#define f(i,n) for(int i=0; i<n-1; i++)

class Graph{
private:
    std::vector<std::vector<int>> graph;

public:
    void InputGraph();
    void PrintGraph();

    void DFS(int node);
    void BFS(int node);

    void ShortestPath(int source, int target);
};