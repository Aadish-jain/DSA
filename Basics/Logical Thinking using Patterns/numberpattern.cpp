#include <bits/stdc++.h>

using namespace std;

void NumPatternwithSpace(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << "";
    }
    for (int j = 1; j <= 2 * n - 2 * i; j++)
    {
      cout << " ";
    }
    for (int j = i; j >= 1; j--)
    {
      cout << j << "";
    }
    cout << endl;
  }
}

void NumSequencePattern(int n)
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

int main()
{
  int input;
  cin >> input;
  NumPatternwithSpace(input);
  NumSequencePattern(input);
  return 0;
}