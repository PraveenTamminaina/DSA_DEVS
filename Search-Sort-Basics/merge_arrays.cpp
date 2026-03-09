#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int arr1[a];
  int arr2[b];
  int arr3[a + b];

  for (int i = 0; i < a; i++)
  {
    cin >> arr1[i];
  }

  for (int i = 0; i < b; i++)
  {
    cin >> arr2[i];
  }

  // Merge arrays

  int i = 0;
  int j = 0;
  int k = 0;
  while (i < a and j < b)
  {
    if (arr1[i] < arr2[j])
    {
      arr3[k] = arr1[i];
      i++;
      k++;
    }
    else
    {
      arr3[k] = arr2[j];
      j++;
      k++;
    }
  }

  while (i < a)
  {
    arr3[k] = arr1[i];
    i++;
    k++;
  }

  while (j < b)
  {
    arr3[k] = arr2[j];
    j++;
    k++;
  }

  for (int i = 0; i < a + b; i++)
  {
    cout << arr3[i] << " ";
  }
}