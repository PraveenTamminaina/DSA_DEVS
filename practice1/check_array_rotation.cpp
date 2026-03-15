#include <iostream>
using namespace std;

void checkrotation()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int count = 0;

  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      cout << i + 1 << endl;
      return;
    }
  }

  cout << 0 << endl;
}

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    checkrotation();
  }
}