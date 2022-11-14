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

    void bfs(T src)
    {
        queue<T> q;
        map<T, bool> vis;

        q.push(src);

        vis[src] = true;

        while(!q.empty())
        {
            T node = q.front();
            q.pop();
            cout<<node<<" , ";
            for(int nbr : l[node])
            {
                if(!vis[nbr])
                {
                    q.push(nbr);
                    vis[nbr] = true;
                }
            }
        }

    }

    // void bfs(T src)
    // {
    //     queue<T> q;
    //     map<T, bool> vis;

    //     for(T e : l)
    //     {
    //         T i = e.first;
    //         vis[i] = false;
    //     }

    //     q.push(src);
    //     vis[src] = true;
    //     while(!q.empty())
    //     {
    //         T temp = q.front();
    //         cout<<temp<<" ,";
    //         q.pop();
    //         for(T ele : temp)
    //         {
    //             // T f = ele.first;
    //             list<T> s = ele.second;
    //             for(T el : s)
    //             {
    //                 for(T v : vis)
    //                 {
    //                     T f  = v.first;
    //                     bool s = v.second;
    //                     if(f == el)
    //                     {
    //                         if(s == true) break;
    //                         else
    //                         {
    //                             q.push(el);
    //                             s = true;
    //                             break;
    //                         }
    //                     }
    //                 }
    //             }
    //         }

    //     }
    // }
};

int main()
{
    Graph<int> g;
    g.addEdge(1, 2);
    g.addEdge(1, 4);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(5, 7);

    g.bfs(1);
    return 0;
}