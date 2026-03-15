#include<iostream>
#include<cmath>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    for(int i=0;i<str.size();i++) {
        if(str[i] >= 'a' and str[i] <= 'z') {
            str[i] -= 32;
        }
        else {
            str[i] += 32;
        }
    }
    
    cout << str;
}