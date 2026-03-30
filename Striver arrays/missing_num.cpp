#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int A[] = {1, 2, 4, 5};

  int n = 5;

  int sum = (n * (n + 1)) / 2;

  for (int i = 0; i < n - 1; i++)
  {
    sum -= A[i];
  }

  cout << sum;
}