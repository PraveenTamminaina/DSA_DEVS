#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int flag = 0;
  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0 and (i % 10 == 2 or i % 10 == 7))
    {
      cout << i << " ";
      flag = 1;
    }
  }

  if (!flag)
  {
    cout << -1;
  }
}
