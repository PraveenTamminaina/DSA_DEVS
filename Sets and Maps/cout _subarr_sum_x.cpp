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
  mp[0] = 1; // base case

  long long sum = 0;
  long long count = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];

    if (mp.find(sum - target) != mp.end())
    {
      count += mp[sum - target];
    }

    mp[sum]++;
  }

  cout << count;
}