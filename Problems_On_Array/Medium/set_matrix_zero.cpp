#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n; // row
  int m; // column
  cin >> n;
  cin >> m;
  vector<vector<int>> matrix;

  for (int i = 0; i < n; i++)
  {
    vector<int> v1;
    for (int j = 0; j < m; j++)
    {
      int a;
      cin >> a;
      v1.push_back(a);
    }
    matrix.push_back(v1);
  }

  cout << "Initial Input matrix is:" << endl;

  for (auto it : matrix)
  {
    for (auto ele : it)
    {
      cout << ele << " ";
    }
    cout << endl;
  }

  int col0 = 1;

  // Traverse the matrix and mark 1st row and 1st col
  for (int i = 0; i < n; i++) // row
  {
    for (int j = 0; j < m; j++) // column
    {
      if (matrix[i][j] == 0)
      {
        matrix[i][0] = 0;
        if (j != 0)
        {
          matrix[0][j] = 0;
        }
        else
        {
          col0 = 0;
        }
      }
    }
  }

  // Mark with zero from (1,1) to (n-1, m-1).
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j < m; j++)
    {
      if (matrix[i][j] != 0)
      {
        if (matrix[i][0] == 0 || matrix[0][j] == 0)
        {
          matrix[i][j] = 0;
        }
      }
    }
  }

  // Mark the 1st row and column
  if (matrix[0][0] == 0)
  {
    for (int j = 0; j < m; j++)
    {
      matrix[0][j] = 0;
    }
  }
  if (col0 == 0)
  {
    for (int i = 0; i < n; i++)
    {
      matrix[i][0] = 0;
    }
  }

  cout << "Final matrix is:" << endl;
  for (auto it : matrix)
  {
    for (auto ele : it)
    {
      cout << ele << " ";
    }
    cout << endl;
  }
}