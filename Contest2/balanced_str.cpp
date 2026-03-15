#include <iostream>
using namespace std;

int main()
{
  string str;
  cin >> str;

  int acount = 0;
  int bcount = 0;

  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == 'a')
    {
      acount++;
      continue;
    }
    bcount++;
  }

  if (acount == bcount)
  {
    cout << "YES";
    return 0;
  }

  cout << "NO";
}