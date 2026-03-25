#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
  int n, target;
  cin >> n >> target;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    if (mp.find(target - arr[i]) != mp.end())
    {
      cout << mp[target - arr[i]] << " " << i + 1;
      return 0;
    }
    mp[arr[i]] = i + 1;
  }

  cout << -1;
}