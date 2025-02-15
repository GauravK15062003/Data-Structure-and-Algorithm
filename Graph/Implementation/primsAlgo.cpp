#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> vis(V, 0);
        
        pq.push({0, 0});
        
        int sum = 0;
        //ElogE + ElogE
        //T.C = O(ElogE)
        //S.C = O(E)
        //E
        while(!pq.empty()) {
            //log E
            int wt = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            
            if(!vis[node]) {
                vis[node] = 1;
                sum = sum + wt;
                //E log E
                for(auto it : adj[node]) {
                    int adjNode = it[0];
                    int edgW = it[1];
                    if(!vis[adjNode])
                      pq.push({edgW, adjNode});
                }
            }
            else continue;
        }
        return sum;
    }

int main() {

}