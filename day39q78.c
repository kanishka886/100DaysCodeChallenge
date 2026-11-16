/*
Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    cout << sum << endl;

    return 0;
}