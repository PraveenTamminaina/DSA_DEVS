#include <iostream>
using namespace std;

int main()
{
  int m, n;
  cin >> m >> n;

  int arr[m][n];

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }

  int layers = (min(m, n) + 1) / 2;

  for (int j = 0; j < layers; j++)
  {

    for (int i = j; i < n - j; i++)
      cout << arr[j][i] << " ";

    for (int i = j + 1; i < m - j; i++)
      cout << arr[i][n - 1 - j] << " ";

    if (m - 1 - j > j)
      for (int i = n - 2 - j; i >= j; i--)
        cout << arr[m - 1 - j][i] << " ";

    if (n - 1 - j > j)
      for (int i = m - 2 - j; i > j; i--)
        cout << arr[i][j] << " ";
  }
}