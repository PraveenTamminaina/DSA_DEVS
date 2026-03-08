#include <iostream>
using namespace std;

int main()
{
  string str;
  cin >> str;

  char a;
  cin >> a;

  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == a)
    {
      continue;
    }
    cout << str[i];
  }
}