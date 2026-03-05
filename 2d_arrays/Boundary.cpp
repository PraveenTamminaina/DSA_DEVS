#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int arr[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << "Enter arr[" << i << "][" << j << "]: ";
      cin >> arr[i][j];
    }
  }

  cout << "Normal form:\n";

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Boundary form:\n";

  if (n == 1)
  {
    for (int i = 0; i < m; i++)
      cout << arr[0][i] << " ";
  }
  else if (m == 1)
  {
    for (int i = 0; i < n; i++)
      cout << arr[i][0] << " ";
  }
  else
  {
    for (int i = 0; i < m; i++)
      cout << arr[0][i] << " ";

    for (int i = 1; i < n; i++)
      cout << arr[i][m - 1] << " ";

    for (int i = m - 2; i >= 0; i--)
      cout << arr[n - 1][i] << " ";

    for (int i = n - 2; i >= 1; i--)
      cout << arr[i][0] << " ";
  }
}