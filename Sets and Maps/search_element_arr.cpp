#include<iostream>
#include<map>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    map <int, int> mp;
    
    for(int i=0;i<n;i++) {
        mp[arr[i]] = i+1;
    }
    
    for(int i=0;i<q;i++) {
        int query;
        cin >> query;
        
        if(mp[query]) {
            cout << mp[query] << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}