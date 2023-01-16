#include <bits/stdc++.h>

using namespace std;

void SquarePattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void TrianglePattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void TriangleNumPattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}

void TriangleNumPattern2(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << endl;
  }
}

void ReverseTrianglePattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j >= i; j--)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void ReverseTriangleNumPattern(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}

void TriangleSpacePattern(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 1; j < n - i; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 1; j <= 2 * i + 1; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 1; j < n - i; j++)
    {
      cout << "";
    }
    cout << endl;
  }
}

void ReverseTriangleSpacePattern(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 1; j <= i; j++)
    {
      cout << " ";
    }
    // star
    for (int j = 1; j <= 2 * n - 2 * i - 1; j++) // 2*n - 2*(i + 1)
    {
      cout << "*";
    }
    // space
    for (int j = 1; j <= i; j++)
    {
      cout << "";
    }
    cout << endl;
  }
}

void HalfDiamond(int n)
{
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int count = i;
    if (i > n)
    {
      count = 2 * n - i;
    }
    for (int j = 1; j <= count; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void OneZeroTriangle(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if ((i + j) % 2 == 0)
      {
        cout << 1;
      }
      else
      {
        cout << 0;
      }
    }
    cout << endl;
  }
}

void NumSpaceNum(int n)
{
  for (int i = 1; i <= n; i++)
  {
    // numbers
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    // space
    for (int j = 1; j <= 2 * n - 2 * i; j++)
    {
      cout << " ";
    }
    for (int j = i; j >= 1; j--)
    {
      cout << j;
    }
    cout << endl;
  }
}

void TriangleCounting(int n)
{
  int count = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << count << " ";
      count += 1;
    }
    cout << endl;
  }
}

void AlphabetTriangle(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch;
    }
    cout << endl;
  }
}

void ReverseAlphabetTriangle(int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch;
    }
    cout << endl;
  }
}

void AlphabetTriangle2(int n)
{
  for (char ch = 'A'; ch < 'A' + n; ch++)
  {
    for (char j = 'A'; j <= ch; j++)
    {
      cout << ch;
    }
    cout << endl;
  }
}

void SpaceAlphabetSpace(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j <= n - i - 1; j++)
    {
      cout << "-";
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
    for (int j = 1; j <= n - i - 1; j++)
    {
      cout << "-";
    }
    cout << endl;
  }
}

int main()
{
  int input;
  cin >> input;
  // SquarePattern(input);
  // TrianglePattern(input);
  // TriangleNumPattern(input);
  // TriangleNumPattern2(input);
  // ReverseTrianglePattern(input);
  // ReverseTriangleNumPattern(input);
  // TriangleSpacePattern(input);
  // ReverseTriangleSpacePattern(input);
  // HalfDiamond(input);
  // OneZeroTriangle(input);
  // NumSpaceNum(input);
  // TriangleCounting(input);
  AlphabetTriangle(input);
  ReverseAlphabetTriangle(input);
  AlphabetTriangle2(input);
  SpaceAlphabetSpace(input);
  return 0;
}