#include <iostream>
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

  long long sum = 0;

  for (int i = 0; i < k; i++)
  {
    sum += arr[i];
  }

  long long maxsum = sum;

  for (int i = k; i < n; i++)
  {
    sum += arr[i];
    sum -= arr[i - k];

    maxsum = max(maxsum, sum);
  }

  cout << maxsum;
}