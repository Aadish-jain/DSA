#include <bits/stdc++.h>

using namespace std;

void starPatternrhombus(int n)
{
  for (int i = 0; i < n; i++)
  {
    // Star
    for (int j = 1; j <= n - i; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 1; j <= 2 * i; j++)
    { // i + 2 or 2* i
      cout << " ";
    }
    // Star
    for (int j = 1; j <= n - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++)
  {
    // Star
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 1; j <= 2 * n - 2 * i - 2; j++)
    {
      cout << " ";
    }
    // Star
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void HalfDiamondSpaceDiamond(int n)
{

  int space = 2 * n - 2;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars = i;
    if (i > n)
    {
      stars = 2 * n - i;
    }
    // stars
    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 1; j <= space; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }
    if (i < n)
    {
      space -= 2;
    }
    else
    {
      space += 2;
    }
    cout << endl;
  }
}

void HolloRectangle(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}

void NumberSquare(int n)
{
  for (int i = 0; i < 2 * n - 1; i++)
  {
    for (int j = 0; j < 2 * n - 1; j++)
    {
      int top = i;
      int left = j;
      int right = (2 * n - 2) - j;
      int down = (2 * n - 2) - i;
      cout << (n - min(min(top, down), min(left, right))) << " ";
    }
    cout << endl;
  }
}

int main()
{
  int input;
  cin >> input;
  starPatternrhombus(input);
  HalfDiamondSpaceDiamond(input);
  HolloRectangle(input);
  NumberSquare(input);
  return 0;
}