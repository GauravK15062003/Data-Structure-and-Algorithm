#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;

void topoSort(int node, vecor<pair<int, int>> adj, vector<int>& vis, stack<int> &st) {
    vis[node] = 1;

    for(auto lt : adj[node]) {
        int v = lt.first;
        if(!vis[v]) {
            topoSort(v, adj, vis, st);
        }
    }
    st.push(node);
}

vector<int> shortestPath(int N, int M, vector<int> edges[]) {
    vector<pair<int, int>> adj[N];
    for(int i=0; i<N; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        adj[u].push_back({v, wt});
    }

    //step-1 do toposort
    //O(N + M)
    int vis[N] = {0};
    stack<int> st;
    for(int i=0; i<N; i++) {
        if(!vis[i]) {
            topoSort(i, adj, vis, st);
        }
    }

    //step-2 do the distance thing
    //O(N + M)
    vector<int> dist(N);
    for(int i=0; i<N; i++) dist[i] = 1e9;
    dist[src] = 0;
    while(!st.empty()) {
        int node = st.top();
        st.pop();

        for(auto lt : adj[node]) {
            int v = lt.first;
            int wt = lt.second;

            if(dist[node] + wt < dist[v]) {
                dist[v] = dist[node] + wt;
            }
        }
    }
    return dist;

}
int main() {

}