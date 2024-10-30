#include<bits/stdc++.h>
using namespace std;

int getL(char ch[], int size) {
    int l = 0;

    for(int i=0; i<size; i++) {
        if(ch[i]=='\0') {
            break;
        } else {
            l++;
        }
    }
    return l;
}

void rev(char ch[], int length) {
    int start = 0;
    int end = length-1;

    while(start<=end) {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
}

int main() {
    int size = 100;
    
    char ch[size];
    cin >> ch;

    int length = getL(ch, size);
    rev(ch, length);
    cout << "Reverse String is: " << ch;

    return 0;
}