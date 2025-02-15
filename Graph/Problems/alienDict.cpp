#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> toposort(int V, vector<int> adj[]) {
    vector<int> indegree(V, 0);
    queue<int> q;
    for(int i=0; i<V; i++) {
        for(auto lt : adj[i]) {
            indegree[lt]++;
        }
    }

    for(int i=0; i<V; i++) {
        if(indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topo;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for(auto lt : adj[node]) {
            indegree[lt]--;
            if(indegree[lt] == 0) {
                q.push(lt);
            }
        }
    }
    return topo;
}
string findOrder(string dict[], int N, int K) {

    //Make a directed graph
    vector<int> adj[K];
    for(int i=0; i<N-1; i++) {
        string s1 = dict[i];
        string s2 = dict[i+1];
        int len = min(s1.size(), s2.size());
        for(int ptr=0; ptr<len; ptr++) {
            if(s1[ptr] != s2[ptr]) {
                adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');
                break;
            }
        }
    }

    vector<int> topo = toposort(K, adj);
    string ans = "";

    for(auto lt : topo) {
        ans = ans + char(lt + 'a');
    }

    return ans;
}

int main() {
    string dict[] = {"baa", "abcd", "abca", "cab", "cad"};
    int N = 4;
    int K = 4;
    string ans = findOrder(dict, N, K);
    cout<<ans;
}