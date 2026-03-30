#include <iostream>
#include <map>
using namespace std;

int main()
{
  int arr[] = {1, 1, 2, 2, 3, 6, 6};

  int n = sizeof(arr) / sizeof(arr[0]);

  map<int, int> mp;

  for (auto x : arr)
  {
    mp[x]++;
  }

  for (auto &p : mp)
  {
    if (p.second == 1)
    {
      cout << p.first;
      return 0;
    }
  }
}