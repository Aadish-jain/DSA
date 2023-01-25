#include <bits/stdc++.h>

using namespace std;

int Reverse(int n)
{
  int rev = 0, lastdigit;
  for (int i = 0; n > 0; i++)
  {
    lastdigit = n % 10;
    rev = rev * 10 + lastdigit;
    n = n / 10;
  }
  return rev;
}

int main()
{
  int num;
  cin >> num;
  
  if (Reverse(num) == num)
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }
  return 0;
}