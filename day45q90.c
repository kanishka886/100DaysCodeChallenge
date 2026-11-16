/*
Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO
*\

#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (char &c : str) {
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';
        }
        else if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
    }

    cout << str;

    return 0;
}