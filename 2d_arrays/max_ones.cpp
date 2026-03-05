#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }

    int max_ones[n] = {0};    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j] == 1) {
                max_ones[i] += 1;
            }
        }
    }
    
    int max_index = 0;
    for(int i=0;i<n;i++) {
        if(max_ones[i] > max_ones[max_index]) {
            max_index = i;
        }
    }
    
    cout << max_index;
}