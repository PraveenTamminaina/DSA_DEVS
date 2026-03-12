#include <iostream>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  int maxcount = 0;
  int i = 0;
  while (i < str.size())
  {
    int count = 0;
    if (str[i] == ' ')
    {
      i++;
      continue;
    }
    int j = i;
    while (j < str.size() and str[j] != ' ')
    {
      count++;
      j++;
    }
    i = j;
    if (count > maxcount)
    {
      maxcount = count;
    }
  }

  cout << maxcount;
}