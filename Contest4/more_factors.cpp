// Two players choose two positive integers A
//  and B
// .

// Define the score of a number as the number of its positive divisors (factors).

// Your task is to determine which player wins:

// Print A if A
//  has more factors
// Print B if B
//  has more factors
// Print DRAW if both have the same number of factors

#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int afac = 0;
  int bfac = 0;

  for (int i = 1; i * i <= a; i++)
  {
    if (a % i == 0)
    {
      if (i == a / i)
      {
        afac += 1;
      }
      else
      {
        afac += 2;
      }
    }
  }

  for (int i = 1; i * i <= b; i++)
  {
    if (b % i == 0)
    {
      if (i == b / i)
      {
        bfac += 1;
      }
      else
      {
        bfac += 2;
      }
    }
  }

  if (afac > bfac)
  {
    cout << "A";
  }
  else if (afac < bfac)
  {
    cout << "B";
  }
  else
  {
    cout << "DRAW";
  }
}