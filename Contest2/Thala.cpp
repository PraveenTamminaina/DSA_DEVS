#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    for(int i=0;i<n;i++) {
        int count = 0;
        string str = arr[i];
        for(int j=0;j<str.size();j++) {
            count += str[j] - '0';
        }
        if(count == 7) {
            cout << "Thala for a reason" << endl;
        }
        else {
            cout << "Blocked for no reason" << endl;
        }
    }
}