#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    int totalsum = 0;
    for(int i=0;i<n;i++) {
        totalsum += arr[i];
    }
    
    int leftsum = 0;
    int equipoints = 0;
    for(int i=0;i<n;i++) {
        leftsum += arr[i];
        int rightsum = totalsum - leftsum + arr[i];
        
        if(leftsum == rightsum) {
            equipoints++;
        }
    }
    
    cout << equipoints;
}