/*
Q80: Multiply two matrices.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154
*/
#include <iostream>
using namespace std;
int main() {
int r1, c1;
cin >> r1 >> c1;
int A[100][100];
for (int i = 0; i < r1; i++) {
for (int j = 0; j < c1; j++) {
cin >> A[i][j];
}
}
int r2, c2;
cin >> r2 >> c2;
int B[100][100];
for (int i = 0; i < r2; i++) {
for (int j = 0; j < c2; j++) {
cin >> B[i][j];
}
}
int C[100][100] = {0};
for (int i = 0; i < r1; i++) {
for (int j = 0; j < c2; j++) {
for (int k = 0; k < c1; k++) {
C[i][j] += A[i][k] * B[k][j];
}
}
}
for (int i = 0; i < r1; i++) {
for (int j = 0; j < c2; j++) {
cout << C[i][j] << " ";
}
cout << endl;
}
return 0;
}