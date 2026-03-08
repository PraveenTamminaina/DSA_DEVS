#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int count;
  for (int i = 1; i <= n; i++)
  {
    count = 0;
    for (int j = 2; j <= i; j++)
    {
      if (i % j == 0)
      {
        count++;
      }
    }

    if (count <= 3)
    {
      cout << i << " ";
    }
  }
}