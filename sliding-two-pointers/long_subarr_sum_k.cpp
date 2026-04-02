#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int l = 0;
  int sum = 0;
  int maxlen = INT_MIN;
  for (int r = 0; r < n; r++)
  {
    sum += arr[r];
    while (sum >= k and l < n)
    {
      sum -= arr[l];
      l++;
    }

    maxlen = max(maxlen, r - l + 1);
  }

  cout << maxlen;
}