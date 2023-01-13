#include <bits/stdc++.h>
using namespace std;

void PrintTriangle(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void PrintNumberTriangle(int num)
{
  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void PrintTriangleSameNum(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}

void ReverseStarTriangle(int n)
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
void ReverseNumTriangle(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
int main()
{
  int input;
  cin >> input;
  PrintTriangle(input);
  PrintNumberTriangle(input);
  PrintTriangleSameNum(input);
  ReverseStarTriangle(input);
  ReverseNumTriangle(input); 
  return 0;
}