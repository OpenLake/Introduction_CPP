#include "graph.hpp"

/**
 * Documentation should go here
 */
void Graph::InputGraph(){

    int n;
    int e;
    std::cout<<"Enter the number of nodes in the graph: ";
    std::cin>>n;
    std::cout<<"Enter the number of edges in the graph: ";
    std::cin>>e;
    f(i,n){
        std::vector<int> x;
        graph.push_back(x);
    }
    f(i,e){
        std::cout<<"Enter the nodes connected by an edge : ";
        int x,y;
        std::cin>>x>>y;
        if(std::find(graph[x].begin(), graph[x].end(), y) == graph[x].end()){
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        else
        {
            std::cout<<"This edge already exists";
        }
    }

}

/**
 * Documentation should go here
 */
void Graph::PrintGraph(){
    f(i, graph.size()){
        std::cout<<" Node "<<i<<": ";
        f(j, graph[i].size())
            std::cout<<graph[i][j]<<' ';
        std::cout<<std::endl;
    }
}