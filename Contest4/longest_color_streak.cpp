#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int maxlen = 0;
  int i = 0;
  while (i < n)
  {
    int j = i + 1;

    while (j < n and arr[i] == arr[j])
    {
      j++;
    }

    maxlen = max(j - i, maxlen);
    i = j;
  }

  cout << maxlen;
}