#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n, ranges, target;
  cin >> n >> ranges >> target;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    int num = arr[i];
    int sum = 0;
    while (num != 0)
    {
      sum += num % 10;
      num /= 10;
    }

    if (sum == target)
    {
      arr[i] = 1;
    }
    else
    {
      arr[i] = 0;
    }
  }

  int newarr[n];
  newarr[0] = arr[0];
  for (int i = 1; i < n; i++)
  {
    newarr[i] = arr[i] + newarr[i - 1];
  }

  for (int i = 0; i < ranges; i++)
  {
    int l, r;
    cin >> l >> r;

    l--;
    r--;
    if (l == 0)
    {
      cout << newarr[r] << endl;
    }
    else
    {
      cout << newarr[r] - newarr[l - 1] << endl;
    }
  }
}