#include <iostream>
#include <climits>
using namespace std;

void checkrotation()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int count = 0;
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      flag = true;
      break;
    }

    count++;
  }

  if (flag)
  {
    cout << count + 1 << endl;
  }
  else
  {
    cout << 0 << endl;
  }
}

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    checkrotation();
  }
}