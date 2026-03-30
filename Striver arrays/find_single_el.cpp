#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,1,2,2,3,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int xorr = 0;
    for(int i=0;i<n;i++) {
        xorr = xorr ^ arr[i];
    }
    
    cout << xorr;
    
}