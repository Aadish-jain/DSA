#include <bits/stdc++.h>
using namespace std;

// Rotate matrix by 90 degree clockwise

// vector<vector<int>> rotate(vector<vector<int>> &matrix)
// {
//   int n = matrix.size();
//   vector<vector<int>> rotated(n, vector<int>(n, 0));
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       rotated[j][n - 1 - i] = matrix[i][j];
//     }
//   }
//   return rotated;
// }

int main()
{
  // Size of Matrix
  int n;
  cin >> n;
  // Input data
  vector<vector<int>> matrix;

  for (int i = 0; i < n; i++)
  {
    vector<int> v1;
    for (int j = 0; j < n; j++)
    {
      int a;
      cin >> a;
      v1.push_back(a);
    }
    matrix.push_back(v1);
  }

  cout << "Input matrix is:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  // Brute force solution:
  // call rotate function
  // vector<vector<int> > rotated = rotate(matrix);

  // cout << "Final Rotated matrix is:" << endl;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     cout << rotated[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  // Optimal Solution:
  // Transpose of matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      swap(matrix[i][j], matrix[j][i]);
    }
  }

  // Reverse of each row
  for (int i = 0; i < n; i++)
  {
    reverse(matrix[i].begin(), matrix[i].end());
  }

  cout << "Final matrix is:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}