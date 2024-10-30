#include<bits/stdc++.h>
using namespace std;

vector<int> replace(char ch[], int size) {
    vector<int> indexes;
    int i = 0;
    while(ch[i] != '\0') {
        if(ch[i] == '@') {
            ch[i] = ' ';
            indexes.push_back(i);
        }
        i++;
    }
    return indexes;
}

int main() {
    int size = 100;
    
    char ch[size];
    cin >> ch;

    cout << "After Replacing: ";
    vector<int> indexes = replace(ch, size);
    cout << ch << endl;

    cout << "Indexes Changes - ";
    for(int i = 0; i < indexes.size(); i++) {
        cout << indexes[i];
        if(i != indexes.size() - 1) {
            cout << ", ";
        }
    }

    return 0;
}