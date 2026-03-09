#include <iostream>
using namespace std;

void compress()
{
  string str;
  cin >> str;

  for (int i = 0; i < str.size();)
  {
    int j = i;
    char temp = str[i];
    while (j < str.size() && str[i] == str[j])
    {
      j++;
    }
    cout << str[i] << j - i << endl;
    i = j;
  }
}

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    compress();
  }
}