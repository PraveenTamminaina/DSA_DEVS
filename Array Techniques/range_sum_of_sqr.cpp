#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  int n, ranges;
  cin >> n >> ranges;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  long long newarr[n];
  newarr[0] = pow(arr[0], 2);
  for (int i = 1; i < n; i++)
  {
    newarr[i] = pow(arr[i], 2) + newarr[i - 1];
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