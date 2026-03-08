#include <iostream>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  int spaces = 0;
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == ' ')
    {
      spaces++;
    }
  }

  cout << spaces + 1;
}