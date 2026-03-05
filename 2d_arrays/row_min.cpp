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

    int min;
    for(int i=0;i<n;i++) {
        min = arr[i][0];
        for(int j=0;j<m;j++) {
            if(min > arr[i][j]) {
                min = arr[i][j];
            }
        }
        cout << min << " ";
    }
    
}