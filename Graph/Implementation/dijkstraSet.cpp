#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> shortest(int V, vector<vector<int>> adj[], int S) {
    unordered_set<pair<int, int>> st;
    vector<int> dist(V, 1e9);

    st.insert({0, S});
    dist[S] = 0;

    while(!st.empty()) {
        auto lt = *(st.begin());
        int node = lt.second;
        int dis = lt.first;
        st.erase(lt);

        for(auto lt : adj[node]) {
            int adjNode = lt[0];
            int edgeW = lt[1];

            if(dis + edgeW < dist[adjNode]) {
                if(dist[adjNode] != 1e9) 
                    st.erase({dist[adjNode], adjNode});
            
                dist[adjNode] = dis + edgeW;
                st.insert({dist[adjNode], adjNode});
            }
        }
    }
    return dist;
}
int main() {

}