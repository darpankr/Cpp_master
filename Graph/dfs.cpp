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

    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void dfs_helper(T src, map<T, bool> &vis)//passing it by address to make it constant for all case
    {
        //recursive func call to make it work
        cout<<src<<" , ";
        vis[src] = true;
        for(T nbr:l[src])
        {
            if(!vis[nbr])
            {
                dfs_helper(nbr, vis);
            }
        }
    }

    void dfs(T src)
    {
        map<T, bool> vis;

        for(auto p:l)
        {
            T f = p.first;
            vis[f] = false;
        }

        dfs_helper(src, vis);
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(5, 7);

    g.dfs(1);
    return 0;
}