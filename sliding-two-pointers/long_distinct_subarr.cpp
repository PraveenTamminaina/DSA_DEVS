
#include<iostream>
#include<map>
#include<climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string str;
    cin >> str;
    
    int l = 0;
    int maxlen = INT_MIN;
    map <int, int> mp;
    for(int r=0;r<n;r++) {
        mp[str[r]]++;
        while(mp[str[r]] > 1) {
            mp[str[l]]--;
            l++;
        }
        
        maxlen = max(maxlen, r-l+1);
    }
    
    cout << maxlen;
}

