#include<iostream>
#include<list>
#include<queue>
#include<map>

using namespace std;

template<typename T>
class Graph
{
    map<T ,list<T>> l;

    public:
    int V;

    Graph(int x)
    {
        this->V = x;
    }

    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    bool cyclic_helper(int node, bool *vis, int p)
    {
        vis[node] = true;

        for(auto nbr : l[node])
        {
            if(!vis[nbr])
            {
                bool cycle_mila = cyclic_helper(nbr, vis, node);
                if(cycle_mila) return true;
            }
            else if(p != nbr) return true;
            else return false;
        }

    }

    bool cyclic()
    {
        bool *vis = new bool[V];
        for(int i = 0; i<V; i++)
        {
            vis[i] = false;
        }

        return cyclic_helper(1, vis, -1);
    }
};

int main()
{
    Graph<int> g(7);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(5, 7);

    if(g.cyclic()) cout<<"cycle contain"<<endl;
    else cout<<"No cycle present"<<endl;
    return 0;
}