#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int A[] = {1, 2, 2, 3, 3, 4, 5, 6};
  int B[] = {2, 3, 3, 5, 6, 6, 7};

  int n = sizeof(A) / sizeof(A[0]);

  int j = 0;
  int i = 0;
  vector<int> intersection;
  while (i < n)
  {
    if (A[i] == B[j])
    {
      intersection.push_back(A[i]);
      i++;
      j++;
    }
    else if (A[i] < B[j])
    {
      i++;
    }
    else
    {
      j++;
    }
  }

  for (auto x : intersection)
  {
    cout << x << " ";
  }
}