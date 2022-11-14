#include<iostream>
#include<vector>

using namespace std;

class Edge
{
    int src, dest;
};

class Graph
{
    public:

    vector<vector<int>> adjlist;

    Graph(vector<Edge> const &edges, int n)
    {
        adjlist.resize(n);

        for(auto &edge : edges)
        {
            adjlist[edge.src].push_back(edge.dest);
        }
    }
};

int main()
{
    vector<Edge> edges = {
        {0, 1}, {1, 2}, {2, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 4}
    };

    int n = 6;

    Graph *graph  = new Graph(edges, n);
    return 0;
}