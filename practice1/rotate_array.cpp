#include <iostream>
using namespace std;

void rotatearray()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int rotate;
  cin >> rotate;

  for (int i = rotate; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  for (int i = 0; i < rotate; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    rotatearray();
  }
}