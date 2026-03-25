#include<iostream>
#include<set>
using namespace std;

int main() {
    long long n, target;
    cin >> n >> target;
    
    long long arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    set<long long> s;
    s.insert(0); 
    
    long long sum = 0;
    
    for(int i=0;i<n;i++) {
        sum += arr[i];
        
        if(s.find(sum - target) != s.end()) {
            cout << "YES";
            return 0;
        }
        
        s.insert(sum);
    }
    
    cout << "NO";
}