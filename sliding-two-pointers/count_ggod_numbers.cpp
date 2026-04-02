#include <iostream>
#include <set>
using namespace std;

int main()
{
  int n, g, k;
  cin >> n >> g >> k;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  set<int> s;
  for (int i = 0; i < g; i++)
  {
    int x;
    cin >> x;
    s.insert(x);
  }

  for (int i = 0; i < n; i++)
  {
    if (s.find(arr[i]) != s.end())
    {
      arr[i] = 1;
    }
    else
    {
      arr[i] = 0;
    }
  }

  long long count = 0;
  for (int i = 0; i < k; i++)
  {
    count += arr[i];
  }

  cout << count << " ";

  for (int i = k; i < n; i++)
  {
    count += arr[i];
    count -= arr[i - k];

    cout << count << " ";
  }
}
