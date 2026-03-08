#include <iostream>
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

  int i = n / 2;
  int j = i - 1;

  while (i <= n - 1 and j >= 0)
  {
    cout << arr[j] << " " << arr[i] << " ";
    i++;
    j--;
  }
}