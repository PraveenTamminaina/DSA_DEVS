#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main()
{
  int q;
  cin >> q;

  map<int, int> freq;
  int distinct = 0;

  while (q--)
  {
    int type;
    cin >> type;

    if (type == 1)
    {
      int x;
      cin >> x;

      if (freq[x] == 0)
        distinct++;
      freq[x]++;
    }

    if (type == 2)
    {
      int x;
      cin >> x;

      if (freq[x] > 0)
      {
        freq[x]--;
        if (freq[x] == 0)
        {
          distinct--;
        }
      }
    }

    if (type == 3)
    {
      cout << distinct << endl;
    }

    if (type == 4)
    {
      int x;
      cin >> x;

      if (freq[x] > 0)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }
}