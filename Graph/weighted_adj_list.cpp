#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<pair<int,int>>> graph;  //pair <node, weight>
int v;
void add_edge(int src, int dest, int wt, bool bi_dir = true) {
    pair<int, int> p;
    p.first = dest;
    p.second = wt;
    graph[src].push_back(p);
    if(bi_dir) {
        graph[dest].push_back({src, wt});
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout<<i<<" -> ";
        for(auto ele : graph[i]) {
            cout<<"("<<ele.first<<" "<<ele.second<<") , ";
        }
        cout<<"\n";
    }
}
int main(){
    cout<<"Enter no. of vertices: "<<endl;
    cin>>v;
    graph.resize(v, list<pair<int,int>> ());
    int e;
    cout<<"Enter no. of edges: "<<endl;
    cin>>e;
    while(e--){
        int s, d, wt;
        cin>>s>>d>>wt;
        add_edge(s,d, wt);//for undirected
        // add_edge(s,d,false);//for directed
    }
    cout<<"Graph in the for adjecency list: "<<endl;
    display();
    return 0;
}