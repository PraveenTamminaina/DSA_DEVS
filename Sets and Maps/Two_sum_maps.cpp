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

  long long count = 0;

  map<long long, long long> mp;
  for (int i = 0; i < n; i++)
  {
    if (mp.find(target - arr[i]) != mp.end())
    {
      count += mp[target - arr[i]];
    }
    mp[arr[i]]++;
  }

  cout << count;
}