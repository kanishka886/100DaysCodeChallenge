/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
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

    int minDim = min(rows, cols);
    bool distinct = true;

    for (int i = 0; i < minDim; i++) {
        for (int j = i + 1; j < minDim; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = false;
                break;
            }
       }
        if (!distinct) break;
    }

    if (distinct) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}