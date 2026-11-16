/*
Q86: Check if a string is a palindrome.
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome
Input 2:
hello
Output 2:
Not palindrome
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
string s;
if (cin >> s) {
string rev = s;
reverse(rev.begin(), rev.end());
if (s == rev) {
cout << "Palindrome" << endl;
} else {
cout << "Not palindrome" << endl;
}
}
return 0;
} 