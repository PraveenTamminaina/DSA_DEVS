#include <iostream>
using namespace std;

int main()
{
  char c;
  cin >> c;

  if (c >= 65 and c <= 90)
  {
    c += 32;
  }

  cout << c;
}