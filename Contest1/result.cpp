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

  int target;
  cin >> target;

  int passCount = 0;
  int failCount = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] >= target)
    {
      passCount++;
    }
    else
    {
      failCount++;
    }
  }

  cout << "Pass: " << passCount << endl;
  cout << "Fail: " << failCount << endl;
}