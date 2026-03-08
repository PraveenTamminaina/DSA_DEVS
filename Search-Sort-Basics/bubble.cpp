#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int pass = 1;
  int swaps = 0;

  for (int i = n - 1; i >= 1; i--)
  {
    swaps = 0;
    for (int j = 0; j < i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr, j, j + 1);
        swaps++;
      }
    }

    cout << "Pass " << pass++ << ": ";

    for (int j = 0; j < n; j++)
    {
      cout << arr[j] << " ";
    }

    cout << ", swaps = " << swaps << endl;

    if (swaps == 0)
    {
      break;
    }
  }
}