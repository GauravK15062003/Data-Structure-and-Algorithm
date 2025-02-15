#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> shortestPath(vector<vector<int>>& edges, int N, int M, int src) {
    vector<int> adj[N];
    for(auto lt : edges) {
        adj[lt[0]].push_back(lt[1]);
        adj[lt[1]].push_back(lt[0]);
    }

    int dist[N];
    for(int i=0; i<N; i++) dist[i] = 1e9;
    dist[src] = 0;

    queue<int> q;
    q.push(src);

    while(!q.empty()) {
        int node = q.front();
        q.pop();
        for(auto lt : adj[node]) {
            if(dist[node] + 1 < dist[lt]) {
                dist[lt] = dist[node] + 1;
                q.push(lt);
            }
        }
    }
    vector<int> ans(N, -1);
    for(int i=0; i<N; i++) {
        if(dist[i] != 1e9) {
            ans[i] = dist[i];
        }
    }
    return ans;
}
int main() {
    int N = 9;
    int M = 10;
    vector<vector<int>> edges = {{0, 1}, {0, 3}, {3, 4}, {4, 5}, {5, 6}, {1, 2}, {2, 6}, {6, 7}, {7, 8}, {6, 8}};
    vector<int> ans = shortestPath(edges, N, M, 0);
    for(int i=0; i<N; i++) {
        cout<<ans[i]<<" ";
    }

}