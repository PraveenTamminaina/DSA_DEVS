// Move zeroes to the end of an array

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

  // int j = 0;
  // int zeros = 0;
  // for(int i=0;i<n;i++) {
  //     if(arr[i] == 0) {
  //         zeros++;
  //     }
  //     else {
  //         arr[j] = arr[i];
  //         j++;
  //     }
  // }

  // for(int i=n-zeros;i<n;i++) {
  //     arr[i] = 0;
  // }

  int j = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      j = i;
      break;
    }
  }

  if (j == -1)
    return 0;

  for (int i = j + 1; i < n; i++)
  {
    if (arr[i] != 0)
    {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;

      j++;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}