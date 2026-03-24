#include <iostream>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int pref[n];

  // Build prefix with correct sign handling
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      pref[i] = arr[i];
    }
    else
    {
      if (i % 2 == 0)
        pref[i] = pref[i - 1] + arr[i];
      else
        pref[i] = pref[i - 1] - arr[i];
    }
  }

  while (q--)
  {
    int l, r;
    cin >> l >> r;

    l--;
    r--;

    int ans = pref[r] - (l > 0 ? pref[l - 1] : 0);

    // flip if l is odd (0-based)
    if (l % 2 == 1)
      ans = -ans;

    cout << ans << endl;
  }
}