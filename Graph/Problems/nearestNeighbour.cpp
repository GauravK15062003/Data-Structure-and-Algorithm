#include<iostream>
#include<vector>
#include<queue>
using namespace std;


//Using BFS 
vector<vector<int>> nearest(vector<vector<int>>grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> visited(n, vector<int> (m, 0));
    vector<vector<int>> dist(n, vector<int> (m, 0));
    queue<pair<pair<int, int>, int>> q;

    //initial condition
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(grid[i][j]==1) {
                q.push({{i, j}, 0});
                visited[i][j] = 1;
            }
        }
    }

    int drow[] = {-1, 0, +1, 0};
    int dcol[] = {0, +1, 0, -1};
    
    //T.C = O(n * m * 4)
    while(!q.empty()) {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int steps = q.front().second;
        q.pop();
        dist[row][col] = steps;

        //Traversing the neighbours
        for(int i=0;i<4;i++) {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && visited[nrow][ncol] == 0) {
                visited[nrow][ncol] = 1;
                q.push({{nrow, ncol}, steps+1});
            }
        }
    }
    return dist;
}

void display(vector<vector<int>> grid) {
    int n = grid.size();
    int m = grid[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    vector<vector<int>> grid = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    display(grid);
    vector<vector<int>> ans = nearest(grid);
    display(ans);

    return 0;
}