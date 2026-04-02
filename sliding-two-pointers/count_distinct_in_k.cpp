
#include<iostream>
#include<map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    map <int, int> mp;
    
    for(int i=0;i<k;i++) {
        mp[arr[i]]++;
    }
    
    cout << mp.size() << " ";
    
    for(int i=k;i<n;i++) {
        mp[arr[i]]++;
        mp[arr[i-k]]--;
        
        if(mp[arr[i-k]] == 0) {
            mp.erase(arr[i-k]);
        }
        
        cout << mp.size() << " ";
    }
}