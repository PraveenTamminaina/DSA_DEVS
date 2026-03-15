#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >>m;
    
    int arr[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i=n-1;i>0;i--) {
        if(arr[i][0] == -1) {
            return 0;
        }
        cout << arr[i][0] << " ";
    }
    
    for(int i=0;i<m;i++) {
        if(arr[0][i] == -1) {
            return 0;
        }
        cout << arr[0][i] << " ";
    }
    
    for(int i=1;i<n;i++) {
        if(arr[i][m-1] == -1) {
            return 0;
        }
        cout << arr[i][m-1] << " ";
    }
    
    for(int i=m-2;i>=0;i--) {
        if(arr[n-1][i] == -1) {
            return 0;
        }
        cout << arr[n-1][i] << " ";
    }
    
    
}