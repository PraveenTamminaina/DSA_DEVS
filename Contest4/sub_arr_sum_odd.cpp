#include <iostream>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 1; i < n; i++)
  {
    arr[i] += arr[i - 1];
  }

  int totalsum = arr[n - 1];

  for (int i = 0; i < q; i++)
  {
    int qsum = 0;
    int a, b;
    cin >> a >> b;

    a--;
    b--;

    if (a == 0)
    {
      qsum = arr[b];
    }
    else
    {
      qsum = arr[b] - arr[a - 1];
    }

    if ((totalsum - qsum) % 2 == 0)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }
}
