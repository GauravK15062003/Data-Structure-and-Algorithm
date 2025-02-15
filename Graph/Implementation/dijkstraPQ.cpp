#include<iostream>
#include<vector>
#include<queue>
using namespace std;
 
 vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue<pair< int, int >, vector< pair< int, int > >, greater< pair< int, int >> > pq;
        
        vector<int> dist(V);
        for(int i=0; i<V; i++) dist[i] = 1e9;
        dist[S] = 0;
        
        pq.push({0, S});//{dist, node}
        
        while(!pq.empty()) {
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto lt : adj[node]) {
                int edgeWeight = lt[1];
                int adjNode = lt[0];
                
                if(dis + edgeWeight < dist[adjNode]) {
                    dist[adjNode] = dis + edgeWeight;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
    }

int main() {
    
    

}