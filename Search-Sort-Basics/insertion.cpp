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

  int shifts;
  for (int i = 1; i < n; i++)
  {
    shifts = 0;
    int j = i - 1;
    int num = arr[i];

    while (j >= 0 and arr[j] > num)
    {
      shifts++;
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = num;

    cout << "Pass " << i << ": ";

    for (int j = 0; j < n; j++)
    {
      cout << arr[j] << " ";
    }

    cout << " , ";
    int flag = 0;
    for (int j = 0; j < n; j++)
    {
      if (j == i + 1)
      {
        cout << "| ";
        flag = 1;
      }
      cout << arr[j] << " ";
    }
    if (flag == 0)
    {
      cout << "| ";
    }

    cout << ", shifts = " << shifts << endl;
  }
}