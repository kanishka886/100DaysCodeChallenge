```cpp
/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/

#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    
    cin >> str;
    cin >> ch;
    
    int count = 0;
    
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}
```
