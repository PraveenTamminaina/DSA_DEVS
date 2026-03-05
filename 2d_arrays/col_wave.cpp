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

  cout << "Normal form: " << endl;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Col wave form: " << endl;

  int col = 1;
  for (int j = 0; j < m; j++)
  {
    if (col % 2 != 0)
    {
      for (int i = 0; i < n; i++)
      {
        cout << arr[i][j] << " ";
      }
    }
    else
    {
      for (int i = n - 1; i >= 0; i--)
      {
        cout << arr[i][j] << " ";
      }
    }

    cout << endl;
    col++;
  }
}