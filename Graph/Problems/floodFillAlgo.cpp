#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<int>>& image, vector<vector<int>>& vis, int sr, int sc, int newColor, int initColor, int delRow[], int delCol[]) {
    vis[sr][sc] = newColor;
    int n = image.size();
    int m = image[0].size();

    //for traversing the neighbours
    for(int i=0;i<4;i++) {
        int nrow = sr + delRow[i];
        int ncol = sc + delCol[i];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==init && vis[nrow][ncol]!=newColor){
            dfs(image, vis, nrow, ncol, newColor, initColor, delRow, delCol);
        }

    }
    
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int initColor = image[sr][sc];
    vector<vector<int>> vis = image;
    int delRow[] = {-1, 0, 1, 0};
    int delCol[] = {0, 1, 0, -1};
    dfs(image, vis, sr, sc, newColor, initColor, delRow, delCol);
    return vis;
}

void print(vector<vector<int>> image) {
    for(int i=0;i<image.size();i++) {
        for(int j=0;j<image[0].size();j++) {
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    vector<vector<int>> image = {{1,2,2}, {2,2,0}, {2,2,2}};
    print(image);
    vector<vector<int>> ans = floodFill(image, 2, 0, 3);
    print(ans);

}