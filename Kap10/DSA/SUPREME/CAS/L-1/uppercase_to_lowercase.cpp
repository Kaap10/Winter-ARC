#include<bits/stdc++.h>
using namespace std;

void convertToUC(char ch[], int length) {
    int i = 0;
    while(ch[i] != '\0') {
        if(ch[i]>='a' && ch[i]<='z') {
            ch[i] = ch[i] - 'a' + 'A';
        }
        i++;
    }
}

void convertToLC(char ch[], int length) {
    int i = 0;
    while(ch[i] != '\0') {
        if(ch[i]>='A' && ch[i]<='Z') {
            ch[i] = ch[i] - 'A' + 'a';
        }
        i++;
    }
}

int main() {
    int size = 100;
    char ch[100];
    cin >> ch;

    int length = strlen(ch);
    cout << "Upper case: ";
    convertToUC(ch, length);
    cout << ch << endl;

    cout << "Lower case: " ;
    convertToLC(ch, length);
    cout << ch << endl;

    return 0;
}