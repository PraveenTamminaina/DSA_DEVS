#include <iostream>
using namespace std;

int main()
{
  int n, q, k;
  cin >> n >> q >> k;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int newArr[n];

  for (int i = 0; i < n; i++)
  {
    int count = 0;

    for (int j = 1; j * j <= arr[i]; j++)
    {
      if (arr[i] % j == 0)
      {
        count++;
        if (j != arr[i] / j)
          count++;
      }
    }

    newArr[i] = (count == k);
  }

  // prefix sum
  for (int i = 1; i < n; i++)
  {
    newArr[i] += newArr[i - 1];
  }

  while (q--)
  {
    int l, r;
    cin >> l >> r;
    l--;
    r--;

    if (l == 0)
      cout << newArr[r] << endl;
    else
      cout << newArr[r] - newArr[l - 1] << endl;
  }
}