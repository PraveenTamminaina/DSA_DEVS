#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int largest = INT_MIN;
  int seclargest = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      seclargest = largest;
      largest = arr[i];
    }
    else if (arr[i] > seclargest and arr[i] != largest)
    {
      seclargest = arr[i];
    }
  }

  if (seclargest != INT_MIN)
  {
    cout << seclargest;
  }
  else
  {
    cout << -1;
  }
}