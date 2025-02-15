#include <iostream>

// Function to add two 2x2 matxs
void addition(int matx1[2][2], int matx2[2][2], int ans[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            ans[i][j] = matx1[i][j] + matx2[i][j];
        }
    }
}

// Function to subtract two 2x2 matxs
void subtraction(int matx1[2][2], int matx2[2][2], int ans[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            ans[i][j] = matx1[i][j] - matx2[i][j];
        }
    }
}

// Function to multiply two 2x2 matxs
void multiplication(int matx1[2][2], int matx2[2][2], int ans[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                ans[i][j] += matx1[i][k] * matx2[k][j];
            }
        }
    }
}
int main() {
    int matx1[2][2] = {{10, 20}, {2, 8}};
    int matx2[2][2] = {{4, 7}, {9, 7}};
    int add[2][2];
    int sub[2][2];
    int mul[2][2];

    // Perform operations
    addition(matx1, matx2, add);
    subtraction(matx1, matx2, sub);
    multiplication(matx1, matx2, mul);

    // Print anss
    std::cout << "Addition of two matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << add[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nSubtraction of two matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << sub[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nMultiplication of two matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << mul[i][j] << " ";
        }
 std::cout << std::endl;
    }
  
}