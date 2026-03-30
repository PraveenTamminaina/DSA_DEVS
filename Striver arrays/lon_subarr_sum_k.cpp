#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 1, 1, 4, 2, 3};
  int target = 3;

  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 1; i < n; i++)
  {
    arr[i] += arr[i - 1];
  }

  int sublen = 0;
  map<int, int> mp;
  mp[0] = -1;
  for (int i = 0; i < n; i++)
  {
    if (mp.find(arr[i] - target) != mp.end())
    {
      sublen = max(sublen, (i - mp[arr[i] - target]));
    }

    if (mp.find(arr[i]) == mp.end())
    {
      mp[arr[i]] = i;
    }
  }

  cout << sublen;
}