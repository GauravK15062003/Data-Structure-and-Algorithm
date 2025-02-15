#include<iostream>
#include<vector>
using namespace std;


void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &mat, int drow[], int dcol[]) {
    vis[row][col] = 1;
    int n = mat.size();
    int m = mat[0].size();

    //check for top, right, bottom, left
    for(int i=0;i<4;i++) {
        int nrow = row + drow[i];
        int ncol = col + dcol[i];
        if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && mat[nrow][ncol] == 'O') {
            dfs(nrow, ncol, vis, mat, drow, dcol);
        }
    }
}

vector<vector<char>> fill(int n, int m, vector<vector<char>> mat) {
    int drow[] = {-1, 0, +1, 0};
    int dcol[] = {0, 1, 0, -1};
    vector<vector<int>> vis(n, vector<int> (m, 0));

    //traverse first row and last row
    for(int j=0;j<m;j++) {
        //first row
        if(!vis[0][j] && mat[0][j] == 'O') {
            dfs(0, j, vis, mat, drow, dcol);
        }
        //last row
        if(!vis[n-1][j] && mat[n-1][j] == 'O') {
            dfs(n-1, j, vis, mat, drow, dcol);
        }
    }

    //traverse first col and last col
    for(int i=0;i<n;i++) {
        //first col
        if(!vis[i][0] && mat[i][0] == 'O') {
            dfs(i, 0, vis, mat, drow, dcol);
        }
        //last col
        if(!vis[i][m-1] && mat[i][m-1] == 'O') {
            dfs(i, m-1, vis, mat, drow, dcol);
        } 
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(!vis[i][j] && mat[i][j] == 'O') {
                mat[i][j] = 'X';
            }
        }
    }
    return mat;
}

void display(vector<vector<char>> grid) {
    int n = grid.size();
    int m = grid[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<char>> mat = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'O', 'X', 'X'}, {'X', 'X', 'O', 'O'}, };
    int n = mat.size();
    int m = mat[0].size();
    cout<<"Original matrix: "<<endl;
    display(mat);
    vector<vector<char>> ans = fill(n, m, mat);
    cout<<"New matrix: "<<endl;
    display(ans);
    return 0;
}

//T.C = O(n) + O(n) + O(n * m * 4)
//S.C = O(n * m)