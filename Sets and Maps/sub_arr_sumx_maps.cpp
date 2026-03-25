#include <iostream>
#include <map>
using namespace std;

int main()
{
  long long n, target;
  cin >> n >> target;

  long long arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  map<long long, long long> mp;
  mp[0] = 0; // base case

  long long sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];

    if (mp.find(sum - target) != mp.end())
    {
      cout << mp[sum - target] + 1 << " " << i + 1;
      return 0;
    }

    if (mp.find(sum) == mp.end())
    {
      mp[sum] = i + 1;
    }
  }

  cout << -1;
}