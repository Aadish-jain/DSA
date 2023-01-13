#include <bits/stdc++.h>

using namespace std;

void spacestar(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // star
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "";
    }

    cout << endl;
  }
}

void reversespacestar(int n)
{
  for (int i = n-1; i >= 0; i--)
  {
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "";
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cin >> n;
  spacestar(n);
  reversespacestar(n);

  return 0;
}