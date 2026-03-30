#include <iostream>
#include <set>
using namespace std;

int main()
{
  int arr1[] = {1, 1, 2, 3, 4, 5};
  int arr2[] = {2, 3, 4, 4, 5, 6, 6};

  set<int> s;
  for (int x : arr1)
  {
    if (s.find(x) != s.end())
    {
    }
    else
    {
      s.insert(x);
    }
  }

  for (int x : arr2)
  {
    if (s.find(x) != s.end())
    {
    }
    else
    {
      s.insert(x);
    }
  }

  for (auto x : s)
  {
    cout << x << " ";
  }
}