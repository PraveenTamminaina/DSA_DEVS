#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n1;
  cin >> n1;

  int arr1[n1];
  for (int i = 0; i < n1; i++)
  {
    cin >> arr1[i];
  }

  int n2;
  cin >> n2;

  int arr2[n2];
  for (int i = 0; i < n2; i++)
  {
    cin >> arr2[i];
  }

  int i = 0, j = 0;
  vector<int> uni;

  while (i < n1 && j < n2)
  {
    if (arr1[i] < arr2[j])
    {
      if (uni.empty() || uni.back() != arr1[i])
        uni.push_back(arr1[i]);
      i++;
    }
    else if (arr1[i] > arr2[j])
    {
      if (uni.empty() || uni.back() != arr2[j])
        uni.push_back(arr2[j]);
      j++;
    }
    else
    {
      if (uni.empty() || uni.back() != arr1[i])
        uni.push_back(arr1[i]);
      i++;
      j++;
    }
  }

  while (i < n1)
  {
    if (uni.empty() || uni.back() != arr1[i])
      uni.push_back(arr1[i]);
    i++;
  }

  while (j < n2)
  {
    if (uni.empty() || uni.back() != arr2[j])
      uni.push_back(arr2[j]);
    j++;
  }

  for (int x : uni)
  {
    cout << x << " ";
  }
}