#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string s) {
    string filtered;
    for (char c : s) {
        if (isalnum(c)) {
            filtered += tolower(c);
        }
    }

    string reversed(filtered.rbegin(), filtered.rend());
    return filtered == reversed;
}

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
