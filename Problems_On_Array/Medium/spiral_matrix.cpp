#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m; // row, col
  cin >> n >> m;

  vector<vector<int>> matrix;
  vector<int> ans;
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

  cout << "Input Matrix is:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  int top = 0, bottom = n - 1, left = 0, right = m - 1;

  while (top <= bottom && left <= right)
  {

    // top left -> top right direction        //left -> right
    for (int i = left; i <= right; i++)
    {
      ans.push_back(matrix[top][i]);
    }
    top++;

    // top right -> right  bottom direction      // right -> bottom
    for (int i = top; i <= bottom; i++)
    {
      ans.push_back(matrix[i][right]);
    }
    right--;

    // right bottom -> bottom left direction        // right -> left
    if (top <= bottom)
    {
      for (int i = right; i >= left; i--)
      {
        ans.push_back(matrix[bottom][i]);
      }
      bottom--;
    }

    // left bottom -> left top                   // bottom -> top
    if (left <= right)
    {
      for (int i = bottom; i >= top; i--)
      {
        ans.push_back(matrix[i][left]);
      }
      left++;
    }
  }

  cout << "Final answer:" << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}