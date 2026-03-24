#include <iostream>
using namespace std;

int main()
{
  int n, size;
  cin >> n >> size;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  long long sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }

  long long maxsum = sum;
  for (int i = size; i < n; i++)
  {
    sum += arr[i];
    sum -= arr[i - size];

    if (sum > maxsum)
    {
      maxsum = sum;
    }
  }

  cout << maxsum;
}
