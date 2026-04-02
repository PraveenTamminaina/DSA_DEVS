#include <iostream>
#include <map>
using namespace std;

int main()
{
  int n;
  long long k;
  cin >> n >> k;

  long long arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  map<long long, long long> mp;
  long long count = 0;

  for (int i = 0; i < n; i++)
  {

    if (k == 0)
    {
      // Only pairs where A[j] == 0
      if (arr[i] == 0)
      {
        count += i; // all previous indices
      }
    }
    else
    {
      if (arr[i] % k == 0)
      {
        long long need = arr[i] / k;
        if (mp.find(need) != mp.end())
        {
          count += mp[need];
        }
      }
    }

    mp[arr[i]]++;
  }

  cout << count;
}