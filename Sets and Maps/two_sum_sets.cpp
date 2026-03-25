#include <iostream>
#include <set>
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

  set<int> s;
  for (int i = 0; i < n; i++)
  {
    if (s.find(target - arr[i]) != s.end())
    {
      cout << "TRUE";
      return 0;
    }

    s.insert(arr[i]);
  }

  cout << "FALSE";
}