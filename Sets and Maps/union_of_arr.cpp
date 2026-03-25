#include <iostream>
#include <set>
using namespace std;

int main()
{
  int m;
  cin >> m;
  int x[m];
  for (int i = 0; i < m; i++)
  {
    cin >> x[i];
  }

  int n;
  cin >> n;
  int y[n];
  for (int i = 0; i < n; i++)
  {
    cin >> y[i];
  }

  set<int> s;

  for (int i = 0; i < m; i++)
  {
    s.insert(x[i]);
  }

  for (int i = 0; i < n; i++)
  {
    s.insert(y[i]);
  }

  cout << s.size() << endl;
  for (int x : s)
  {
    cout << x << " ";
  }
}