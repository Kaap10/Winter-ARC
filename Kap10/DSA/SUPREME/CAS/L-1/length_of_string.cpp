#include<bits/stdc++.h>
using namespace std;

int getL(char ch[], int size) {
    int l = 0;

    for(int i=0; i<size; i++) {
        if(ch[i] == '\0') {
            break;
        } else {
            l++;
        }
    }
    return l;
}

int main() {
    int size = 100;
    char ch[100];
    cout << "Enter Your String: ";
    cin >> ch;

    int length = getL(ch, size);
    cout << "Length of string is: " << length;
    return 0;
}