#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    int total = 0;
    int max = 0;
    int min = arr[0];
    int avg = 0;
    
    for(int i=0;i<n;i++) {
        total += arr[i];
        if(max < arr[i]) {
            max = arr[i];
        }
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    
    avg = total/n;
    
    cout << total << " " << max << " " << min << " " << avg;

}