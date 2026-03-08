#include <iostream>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  if (str.size() != 10)
  {
    cout << "Weak";
    return 0;
  }

  bool lowerFlag = false;
  bool upperFlag = false;
  bool digitFlag = false;
  bool specialFlag = false;

  int i = 0;
  while ((!lowerFlag or !upperFlag or !digitFlag or !specialFlag) and i < str.size())
  {
    if (str[i] >= 'a' and str[i] <= 'z')
    {
      lowerFlag = true;
    }
    else if (str[i] >= 'A' and str[i] <= 'Z')
    {
      upperFlag = true;
    }
    else if (str[i] >= '0' and str[i] <= '9')
    {
      digitFlag = true;
    }
    else
    {
      specialFlag = true;
    }

    i++;
  }

  if (lowerFlag and upperFlag and digitFlag and specialFlag)
  {
    cout << "Strong";
  }
  else
  {
    cout << "Weak";
  }
}