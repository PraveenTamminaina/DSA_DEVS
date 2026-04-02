
#include <iostream>
using namespace std;

int isVowel(char c)
{
  if (c == 'a' or c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' or c == 'E' || c == 'I' || c == 'O' || c == 'U')
  {
    return 1;
  }
  return 0;
}

int main()
{
  int n, k;
  cin >> n >> k;

  string str;
  cin >> str;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    arr[i] = isVowel(str[i]);
  }

  int count = 0;
  for (int i = 0; i < k; i++)
  {
    count += arr[i];
  }
  cout << count << " ";

  for (int i = k; i < n; i++)
  {
    count += arr[i];
    count -= arr[i - k];

    cout << count << " ";
  }
}