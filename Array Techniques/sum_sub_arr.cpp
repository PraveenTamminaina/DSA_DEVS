#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    for(int l=0;l<n;l++) {
        for(int r=l;r<n;r++) {
            int sum = 0;
            for(int i=l;i<=r;i++) {
                sum += arr[i];
            }
            if(sum != 0) cout << sum << endl;
    }
}
}