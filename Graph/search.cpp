#include "graph.hpp"

/**
 * Documentation should go here
 */
void Graph::BFS(int node){
    int n = graph.size();
    bool visited[n];
    std::memset(visited, false, sizeof(bool));

    std::vector<int> unvisited;
    std::vector<int> result;


    unvisited.push_back(node);
    while (unvisited.size()!=0)
    {
        int current = unvisited.back();
        unvisited.pop_back();
        result.push_back(current);
        visited[current] = true;
        f(i, graph[current].size()){
            if(!visited[graph[current][i]]){
                unvisited.push_back(graph[current][i]);
                visited[graph[current][i]] = true;
            }
        }
    }

    std::cout<<"The BFS traversed graph is: ";
    f(i,result.size())
        std::cout<<result[i]<<", ";
    std::cout<<std::endl;

}

/**
 * BFS. Name should be enough.
 * Still needs to be replaced by documentation.
 */
void Graph::BFS(int node){
    std::cout<<"[TODO @ Graph/search.cpp] : The function BFS() needs to be implemented.\n";
}
