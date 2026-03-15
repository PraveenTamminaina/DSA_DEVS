#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  string str;
  cin >> str;

  int hours = stoi(str.substr(0, 2));
  int minutes = stoi(str.substr(3, 5));

  if (hours == minutes)
  {
    cout << "Mogambo is happy";
  }
  else
  {
    cout << "Mogambo is sad";
  }
}