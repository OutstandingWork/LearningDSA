#include<bits/stdc++.h>
using namespace std;

int countPaths(int rows, int cols) {
    vector<vector<int>> path(rows, vector<int>(cols, 0));

   
    for (int i = 0; i < rows; i++) {
        path[i][0] = 1;
    }

    for (int j = 0; j < cols; j++) {
        path[0][j] = 1;
    }

    
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            path[i][j] = path[i - 1][j] + path[i][j - 1];
        }
    }

    
    return path[rows - 1][cols - 1];
}
int main() {
    int rows, cols;
    cin >> rows;
    cin >> cols;
    int ways = countPaths(rows, cols);
    cout << ways;

    return 0;
}
