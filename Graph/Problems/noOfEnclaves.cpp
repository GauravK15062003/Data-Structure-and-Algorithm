#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int numberOfEnclaves(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> vis(n, vector<int> (m, 0));
    queue<pair<int, int>> q;


    //Initial condition

    //traverse first row
    // for(int j=0;j<m;j++) {
    //     if(grid[0][j] == 1) {
    //         vis[0][j] = 1;
    //         q.push({0, j});
    //     }
    // }
    //traverse last row
    // for(int j=0;j<m;j++) {
    //     if(grid[n-1][j] == 1) {
    //         vis[n-1][j] = 1;
    //         q.push({n-1, j});
    //     }
    // }
    //traverse first col
    // for(int i=0;i<n;i++) {
    //     if(grid[i][0] == 1) {
    //         vis[i][0] = 1;
    //         q.push({i, 0});
    //     }
    // }
    //traverse last col
    // for(int i=0;i<n;i++) {
    //     if(grid[i][m-1] == 1) {
    //         vis[i][m-1] = 1;
    //         q.push({i, m-1});
    //     }
    // }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(i==0 || i == n-1 || j == 0 || j == m-1) {
                vis[i][j] = 1;
                q.push({i, j});
            }
        }
    }

    int drow[] = {-1, 0, +1, 0};
    int dcol[] = {0, +1, 0, -1}; 

    while(!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        //traverse the neighbours
        for(int i=0;i<4;i++) {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                vis[nrow][ncol] == 1;
                q.push({nrow, ncol});
            }
        }
    }

    int ans = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if( grid[i][j] == 1 && vis[i][j] == 0) {
                ans++;
            }
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> grid = {{0, 0, 0, 1, 1}, {0, 0, 1, 1, 0}, {0, 1, 0, 0, 0}, {0, 1, 1, 0, 0}, {0, 0, 0, 1, 1}};
    cout<<"Hello";
    cout<<numberOfEnclaves(grid);
    
    
}

//T.C = O(n * m) + O(n * m) + O(n * m * 4)
//S.C = O(n * m)