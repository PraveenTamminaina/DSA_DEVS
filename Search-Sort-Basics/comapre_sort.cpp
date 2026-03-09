#include <iostream>
using namespace std;

int insertion(int arr[], int n)
{
  int shifts = 0;
  for (int i = 1; i < n; i++)
  {
    int j = i - 1;
    int temp = arr[i];

    while (j >= 0 and arr[j] > temp)
    {
      arr[j + 1] = arr[j];
      j--;
      shifts++;
    }
    arr[j + 1] = temp;
  }

  return shifts;
}

void swap(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int selection(int arr[], int n)
{
  int swaps = 0;

  for (int i = 0; i < n; i++)
  {
    int min = arr[i];
    int pos = i;
    bool flag = false;

    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < min)
      {
        min = arr[j];
        pos = j;
        flag = true;
      }
    }
    if (flag)
    {
      swap(arr, i, pos);
      swaps++;
    }
  }

  return swaps;
}

void sort()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int arr1[n];
  for (int i = 0; i < n; i++)
  {
    arr1[i] = arr[i];
  }

  int swaps = selection(arr, n);
  int shifts = insertion(arr1, n);

  if (swaps < shifts)
  {
    cout << "Selection Sort" << endl;
  }
  else if (shifts < swaps)
  {
    cout << "Insertion Sort" << endl;
  }
  else
  {
    cout << "Tie" << endl;
  }
}

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    sort();
  }
}