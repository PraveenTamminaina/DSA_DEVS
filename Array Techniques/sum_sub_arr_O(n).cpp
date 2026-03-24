#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long total = 0;

    for(int l = 0; l < n; l++) {
        long long sum = 0;
        for(int r = l; r < n; r++) {
            sum += arr[r];     // reuse previous sum
            total += sum;      // add this subarray sum
        }
    }

    cout << total << '\n';
}