#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool isPossible(int N, vector<pair<int, int>>& prerequisites) {
    //form the graph
    vector<int> graph[N];
    for(auto it : prerequisites) {
        graph[it.first].push_back(it.second);
    }

    //checking for topological sort
    vector<int> indegree(N, 0);
    for(int i=0; i<N; i++) {
        for(auto ele : graph[i]) {
            indegree[ele]++;
        }
    }
    queue<int> q;
    for(int i=0; i<N; i++) {
        if(indegree[i] == 0) q.push(i);
    }

    vector<int> topo;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for(auto it : graph[node]) {
            indegree[it]--;
            if(indegree[it] == 0) q.push(it);
        }
    }

    if(topo.size() == N) return true;
    return false;
}
int main() {
    int N = 4;
    vector<pair<int, int>> pr = 
        {{1,0}, {2,1}, {3,2}};//1
        // {{0,1}, {3,2}, {1,3}, {3,0}};//0

    bool ans = isPossible(N, pr);
    if(ans == 1) {
        cout<<"Yes, all the tasks can be performed!";
    }
    else {
        cout<<"No, Tasks can not be performed!";
    }
}