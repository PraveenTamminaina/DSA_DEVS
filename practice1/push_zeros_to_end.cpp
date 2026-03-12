#include <iostream>
#include <climits>
using namespace std;

void pushzeros()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      count++;
      continue;
    }
    cout << arr[i] << " ";
  }

  for (int i = 0; i < count; i++)
  {
    cout << 0 << " ";
  }

  cout << endl;
}

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    pushzeros();
  }
}