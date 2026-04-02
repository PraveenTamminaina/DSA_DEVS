#include <iostream>
using namespace std;

bool isPallindrome(string s)
{
  int l = 0;
  int r = s.length() - 1;

  while (l < r)
  {
    if (s[l] == s[r])
    {
      l++;
      r--;
    }
    else
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int n;
  cin >> n;

  string str;
  cin >> str;

  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      string s = str.substr(i, j - i + 1);
      if (isPallindrome(s))
      {
        cout << s << endl;
      }
    }
  }
}
