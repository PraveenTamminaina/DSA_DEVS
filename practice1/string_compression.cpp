#include<iostream>
using namespace std;

void compress() {
    string str;
    cin >> str;
    
    int i=0;
    while(i < str.size()) {
        int j = i;
        char temp = str[i];
        while(j < str.size() && str[i] == str[j]) {
            j++;
        }
        cout << str[i];
        if(j - i > 1) {
            cout << j - i;
        }
        i = j;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++) {
        compress();
    }
}