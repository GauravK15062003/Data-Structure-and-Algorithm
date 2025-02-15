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

bool detect(int st, vector<int>& vis) {
    queue<pair<int, int>> q;
    q.push({st, -1});
    vis[st] = 1;

    while(!q.empty()) {
        int node = q.front().first;
        int parentNode = q.front().second;
        q.pop();

        for(auto lt : graph[node]) {
            if(!vis[lt]) {
                vis[lt] = 1;
                q.push({lt, node});
            }
            else if(parentNode != lt) return true;
        }
    }
    return false;
}

bool isCycle(int st) {
    vector<int> vis(v,0);

    //for connected components
    for(int i=0;i<v;i++) {
        if(!vis[i]) {
            if(detect(i, vis)) return true;
        }
    }
    return false;
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

    bool ans = isCycle(0);
    cout<<ans;
   
    return 0;
}