#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  string one, two;
  cin >> one >> two;

  int i = 0;
  int j = 0;
  while (i < one.size() and j < two.size())
  {
    if (i == 0)
    {
      cout << one[i];
    }
    else
    {
      cout << '-' << one[i];
    }
    i++;

    if (j == 0 and i == 0)
    {
      cout << two[j];
    }
    else
    {
      cout << '-' << two[j];
    }

    j++;
  }

  while (i < one.size())
  {
    cout << '-' << one[i];
    i++;
  }

  while (j < two.size())
  {
    cout << '-' << two[j];
    j++;
  }
}
