#include<iostream>
#include<map>
using namespace std;

int main() {
    int m;
    cin >> m;
    int x[m];
    for(int i=0;i<m;i++) cin >> x[i];

    int n;
    cin >> n;
    int y[n];
    for(int i=0;i<n;i++) cin >> y[i];

    map<int,int> mp1, mp2;

    for(int i=0;i<m;i++) mp1[x[i]]++;
    for(int i=0;i<n;i++) mp2[y[i]]++;

    int total = 0;

    // compute intersection
    for(auto p : mp1) {
        int key = p.first;
        int value = p.second;

        if(mp2.find(key) != mp2.end()) {
            int freq = min(value, mp2[key]);
            mp1[key] = freq;   // reuse mp1 to store result
            total += freq;
        } else {
            mp1[key] = 0;
        }
    }

    // output
    if(total == 0) {
        cout << 0 << endl;
        cout << endl;
        return 0;
    }

    cout << total << endl;

    for(auto p : mp1) {
        int key = p.first;
        int freq = p.second;

        for(int i=0;i<freq;i++) {
            cout << key << " ";
        }
    }
}