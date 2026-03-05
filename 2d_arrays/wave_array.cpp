#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << "Enter arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "Normal form: " << endl;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Wave form: " << endl;
    int row = 1;
    for(int i=0;i<n;i++) {
        if(row % 2 != 0) {
            for(int j=0;j<m;j++) {
                cout << arr[i][j] << " ";
            }
        }
        else {
            for(int j=m-1;j>=0;j--) {
                cout << arr[i][j] << " ";
            }
        }
        
        cout << endl;
        row++;
    }
}