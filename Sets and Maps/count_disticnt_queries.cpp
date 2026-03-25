#include <iostream>
#include <map>
using namespace std;

int main()
{
  int q;
  cin >> q;

  map<int, int> freq;
  int distinct = 0; // ✅ FIX: initialize once

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

    else if (type == 2)
    {
      int x;
      cin >> x;

      if (freq[x] > 0)
      {
        distinct--;
        freq.erase(x);
      }
    }

    else if (type == 3)
    {
      cout << distinct << endl;
    }

    else if (type == 4)
    {
      int x;
      cin >> x;

      if (freq[x] > 0)
      {
        cout << "YES\n";
      }
      else
      {
        cout << "NO\n";
      }
    }
  }
}