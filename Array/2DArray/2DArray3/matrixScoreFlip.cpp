#include <iostream>
#include <vector>
using namespace std;

int matrixScore(vector< vector<int> >& grid){
    int rows = grid.size();
    int cols = grid[0].size();
    // making first column all 1's 
    for(int i=0; i<rows; i++){
        if(grid[i][0]==0) { // flip
            for(int j=0; j<cols; j++){    
                if(grid[i][j]==0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }
    // flip the column where noz>noo
    for(int j=0; j<cols; j++){
        int noz = 0;
        int noo = 0;
        for(int i=0; i<rows; i++){
            if(grid[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){ // flip
            for(int i=0; i<rows; i++){
                if(grid[i][j]==0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }
    int sum = 0;
    for(int i=0; i<rows; i++){
        int x = 1;
        for(int j=cols-1; j>=0; j--){
            sum += grid[i][j]*x;
            x *= 2;
        }
    }
    return sum;
}
int main()
{   int rows, cols;

    // Ask the user for the number of rows and columns in the 2D vector
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Create a 2D vector of integers
    vector<vector<int>> myVector(rows, vector<int>(cols));

    // Input the elements of the 2D vector
    cout << "Enter the elements of the 2D vector:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> myVector[i][j];
        }
    }
    cout << "The 2D vector you entered is:" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << myVector[i][j] << ' ';
        }
        cout << endl; // Start a new row
    }

    int x = matrixScore(myVector);
    cout<<"Sum is : "<<x;
    
   
    

    
}