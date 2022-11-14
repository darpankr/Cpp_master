#include<iostream>
#include<list>

using namespace std;

class Graph
{
    public:
    int V;

    list<int> *l;

    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void display()
    {
        for(int i = 0; i< V; i++)
        {
            cout<<"V["<<i<<"] -> [";
            for(auto ed : l[i])
            {
                cout<<ed<<", ";
            }
            cout<<"]"<<endl;
        }
    }
};

int main()
{
    Graph graph(4);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(2, 3);
    graph.addEdge(1, 2);

    graph.display();

    return 0;
}