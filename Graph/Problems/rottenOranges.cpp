#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;


int orangeRotting(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<pair<int, int>,int>> q;//{{row, col}, time}
    vector<vector<int>> visited;


    //initial condition
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            if(grid[i][j]==2) {
                pair<pair<int,int>, int> p;
                p.first.first = i;
                p.first.second = j;
                p.second = 0;
                q.push(p);
                visited[i][j] = 2;
            }
            else {
                visited[i][j] = 0;
            }
        }
    }

    int tm = 0;
    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};
    while(!q.empty()) {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        tm = max(tm, t);
        q.pop();

        //traversing the neighbouring nodes
        for(int i = 0;i < 4;i++) {
            int nrow = r + drow[i];
            int ncol = c + dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
               && visited[nrow][ncol]!=2 && grid[nrow][ncol]==1) {
                pair<pair<int,int>, int> p;
                p.first.first = nrow;
                p.first.second = ncol;
                p.second = tm++;
                q.push(p);
                visited[nrow][ncol] = 2;
               }
        }
    }


    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(visited[i][j] != 2 && grid[i][j] == 1) {
                return -1;
            }
        }
    }
    return tm;
}
int main() {
    vector<vector<int>> grid = {{0,2,2}, {0,1,1},{2,2,1}};
    int ans = orangeRotting(grid);
    cout<<ans;
}