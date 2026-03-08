#include <iostream>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  int i = 0;
  int j = str.size() - 1;
  while (i < j)
  {
    if (str[i] != str[j])
    {
      cout << "NO";
      return 0;
    }
    i++;
    j--;
  }

  cout << "YES";
}