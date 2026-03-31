// Balanced substring -> if substring of equal no of ovels and consonants

#include <iostream>
using namespace std;

bool isVowel(char c)
{
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
      c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
  {
    return true;
  }
  return false;
}

int main()
{
  int s, q;
  cin >> s >> q;
  string str;
  cin >> str;

  int arr[s];
  for (int i = 0; i < s; i++)
  {
    if (isVowel(str[i]))
    {
      arr[i] = 1;
    }
    else
    {
      arr[i] = -1;
    }
  }

  for (int i = 1; i < s; i++)
  {
    arr[i] += arr[i - 1];
  }

  for (int i = 0; i < q; i++)
  {
    int a, b;
    cin >> a >> b;

    a--;
    b--;

    int sum = 0;

    if (a == 0)
    {
      sum = arr[b];
    }
    else
    {
      sum = arr[b] - arr[a - 1];
    }

    if (sum == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
