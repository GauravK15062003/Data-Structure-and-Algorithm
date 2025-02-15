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

bool check(int start, vector<int>& color) {
    queue<int> q;
    q.push(start);

    color[start] = 0;

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        for(auto it : graph[node]) {
            //if the adjacent node is yet not colored
            //you will give the opposite color of the node
            if(color[it] == -1) {
                color[it] = !color[node];
                q.push(it);
            }
            //if the adjacent guy having the some color
            //someone did color it on some other path
            else if(color[it] == color[node]){
                return false;
            }
        }
    }
    return true;
}
bool isBipartite() {
    vector<int> color(v, -1);

    //for multiple components of graph
    for(int i=0; i<v; i++) {
        if(color[i] == -1) {
            if(check(i, color) == false) {
                return false;
            }
        }
    }
    return true;
}

int main(){
    cout<<"Enter no. of vertices: "<<endl;
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cout<<"Enter no. of edges: "<<endl;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s,d);//for undirected
        // add_edge(s,d,false);//for directed
    }
    cout<<"Graph in the for adjecency list: "<<endl;
    display();
    bool ans = isBipartite();
    cout<<ans;
    return 0;
}