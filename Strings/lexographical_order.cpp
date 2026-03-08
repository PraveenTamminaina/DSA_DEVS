#include <iostream>
using namespace std;

int main()
{
  string a, b;

  cin >> a >> b;

  if (a < b)
  {
    cout << "A";
  }
  else if (b < a)
  {
    cout << "B";
  }
  else
  {
    cout << "Equal";
  }
}