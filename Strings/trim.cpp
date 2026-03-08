#include <iostream>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == ' ') // Don't use double quotes can't compare char with double quotes(string)
    {
      continue;
    }
    cout << str[i];
  }
}