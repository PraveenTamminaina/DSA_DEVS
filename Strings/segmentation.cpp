#include <iostream>
using namespace std;

int main()
{
  char c;
  cin >> c;

  if (c >= 65 and c <= 90)
  {
    cout << "Uppercase";
  }
  else if (c >= 97 and c <= 122)
  {
    cout << "Lowercase";
  }
  else if (c >= 48 and c <= 56)
  {
    cout << "Digit";
  }
  else
  {
    cout << "Special";
  }
}