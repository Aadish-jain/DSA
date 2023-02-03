#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i, string str)
{
  if (i >= str.size() / 2)
    return true;
    
  if (str[i] != str[str.size() - i - 1])
    return false;
  return palindrome(i + 1, str);
}

int main()
{
  string str;
  cin >> str;
  if (palindrome(0, str) == true)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}