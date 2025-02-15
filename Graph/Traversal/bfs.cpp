#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

vector<list<int>> graph;
int v;

void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if(bi_dir) {
        graph[dest].push_back(src);
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout<<i<<" -> ";
        for(auto ele : graph[i]) {
            cout<<ele<<" , ";
        }
        cout<<"\n";
    }
}

vector<int> bfsOfGraph(int st) {
    vector<int> visited(v, 0);
    visited[st] = 1;
    queue<int> q;
    q.push(st);
    vector<int> bfs; // to store the bfs traversal
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        //find the neighbours of node using adjecency list
        for(auto lt : graph[node]) {
            if(!visited[lt]) {
                visited[lt] = 1;
                q.push(lt);
            }
        }
    }
    return bfs;
}

void printVector(vector<int>& v) {
    int n = v.size();
    for(int i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int e;

    cout<<"Enter no. of vertices and edges: "<<endl;
    cin>>v>>e;
    graph.resize(v, list<int> ());

    cout<<"Enter the edges(u v) below: "<<endl;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s,d);//for undirected
        // add_edge(s,d,false);//for directed
    }
    cout<<"Graph in the adjecency list: "<<endl;
    display();

    int startNode;
    cout<<"Enter the starting node: ";
    cin>>startNode;
    vector<int> ans = bfsOfGraph(startNode);
    cout<<"BFS Traversal of given Graph from node:"<<startNode<<endl;
    printVector(ans);

    return 0;
}