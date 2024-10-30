#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(const char ch[], int size) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        if (ch[start] != ch[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char ch[100];
    cin >> ch;

    int size = strlen(ch); // Get the actual length of the input string

    bool ans = palindrome(ch, size);
    cout << (ans ? "Palindrome" : "Not a palindrome") << endl;

    return 0;
}
