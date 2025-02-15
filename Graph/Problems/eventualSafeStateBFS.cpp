#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<algorithm>
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

vector<int> eventualSafeState() {
    vector<int> graphRev[v];
    vector<int> indegree(v, 0);
    for(int i=0; i<v; i++) {
        for(auto lt : graph[i]) {
            //i -> lt
            //lt -> i
            graphRev[lt].push_back(i);
            indegree[i]++;
        }
    }

    queue<int> q;
    vector<int> safeNodes;
    for(int i=0; i<v; i++) {
        if(indegree[i] == 0) {
            q.push(i);
        }
    }

    while(!q.empty()) {
        int node = q.front();
        q.pop();
        safeNodes.push_back(node);
        for(auto lt : graphRev[node]) {
            indegree[lt]--;
            if(indegree[lt] == 0) q.push(lt);
        }
    }
    return safeNodes;
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
        // add_edge(s,d);//for undirected
        add_edge(s,d,false);//for directed
    }
    cout<<"Graph in the for adjecency list: "<<endl;
    display();

    vector<int> ans = eventualSafeState();
    ans.sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}