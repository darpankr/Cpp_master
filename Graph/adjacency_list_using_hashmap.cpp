#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class Graph
{
    unordered_map<string, list<pair<string, int>>> l;

    public:
    void addEdge(string a, string b, bool bidir, int w)
    {
        l[a].push_back(make_pair(b, w));
        if(bidir)
        {
            l[b].push_back(make_pair(a, w));
        }
    }

    void display()
    {
        for(auto p : l)
        {
            string c1 = p.first;
            list<pair<string, int>> cw = p.second;
            cout<<c1<<"->";
            for(auto c : cw)
            {
                string c2 = c.first;
                int w =  c.second;
                cout<<"("<<c2<<" = "<<w<<"),";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Graph g;
    g.addEdge("a", "b", true, 20);
    g.addEdge("b", "d", true, 40);
    g.addEdge("a", "c", true, 10);
    g.addEdge("c", "d", true, 40);
    g.addEdge("a", "d", false, 50);

    g.display();
    return 0;
}
