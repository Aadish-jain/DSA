#include <bits/stdc++.h>

using namespace std;

void AlpbPattern1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void ReverseALpbPattern2(int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void AlpbPattern3(int n)
{
  for (char i = 'A'; i < 'A' + n; i++)
  {
    for (char j = 'A'; j <= i; j++)
    {
      cout << i;
    }
    cout << endl;
  }
}

void AlpbPattern4(int n)
{
  for (int i = 0; i < n; i++)
  {
    // spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    char ch = 'A';
    int breakpoint = (2 * i + 1) / 2;
    for (int j = 1; j <= 2 * i + 1; j++)
    {
      cout << ch;
      if (j <= breakpoint)
        ch++;
      else
        ch--;
    }
    // spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout <<endl;
  }
}


int main()
{
  int input;
  cin >> input;
  AlpbPattern1(input);
  cout << endl;
  ReverseALpbPattern2(input);
  cout << endl;
  AlpbPattern3(input);
  cout << endl;
  AlpbPattern4(input);
  cout << endl;
  return 0;
}