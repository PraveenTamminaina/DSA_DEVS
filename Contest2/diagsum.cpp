#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }

  long long diagsum = 0;
  long long nondiagsum = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j or j + i == n - 1)
      {
        diagsum += arr[i][j];
      }
      else
      {
        nondiagsum += arr[i][j];
      }
    }
  }

  cout << diagsum << " " << nondiagsum;
}
