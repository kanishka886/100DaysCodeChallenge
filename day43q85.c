/*
Q85: Reverse a string.
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
string s;
if (cin >> s) {
reverse(s.begin(), s.end());
cout << s << endl;
}
return 0;
}