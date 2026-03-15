#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  string str;
  cin >> str;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    if (str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u')
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

  int ranges;
  cin >> ranges;

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