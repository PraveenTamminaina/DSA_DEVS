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

  for (int i = 0; i < n - 1; i++)
  {
    int min = arr[i];
    int min_index = i;

    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < min)
      {
        min = arr[j];
        min_index = j;
      }
    }

    swap(arr, i, min_index);

    cout << "Pass " << i + 1 << ": ";

    for (int j = 0; j < n; j++)
    {
      cout << arr[j] << " ";
    }

    cout << ", min_selected = " << min << endl;
  }
}