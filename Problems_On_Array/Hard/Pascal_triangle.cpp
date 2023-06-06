#include <bits/stdc++.h>
using namespace std;
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1

// Variation1: In this case, we are given the row number r and the column number c,
//  and we need to find out the element at position (r,c).

int nCr(int n, int r)
{
  long long res = 1;
  for (int i = 0; i < r; i++)
  {
    res = res * (n - i);
    res = res / (i + 1);
  }
  return (int)res;
}

int pascalTriangle(int r, int c)
{
  int element = nCr(r - 1, c - 1);
  return element;
}

vector<int> pascalTriangle2(int row)
{
  long long res = 1;
  vector<int> pascalRow;
  pascalRow.push_back(res);
  for (int i = 1; i < row; i++)
  {
    res = res * (row - i);
    res = res / i;
    pascalRow.push_back(res);
  }
  return pascalRow;
}

vector<vector<int>> pascalTriangle3(int n)
{
  vector<vector<int>> ans;
  for (int row = 1; row <= n; row++)
  {
    vector<int> tempLst;
    for (int col = 1; col <= row; col++)
    {
      tempLst.push_back(nCr(row - 1, col - 1));
    }
    ans.push_back(tempLst);
  }
  return ans;
}

int main()
{
  //// Variation1: In this case, we are given the row number r and the column number c,
  ////  and we need to find out the element at position (r,c).

  // int col, row;
  // cin >> row >> col; // 5 4 => element -> 4
  // int element = pascalTriangle(row, col);
  // cout << element;

  // // Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.
  // int row_number;
  // cin >> row_number;
  // vector<int> row_element = pascalTriangle2(row_number);
  // for (int i = 0; i < row_element.size(); i++)
  // {
  //   cout << row_element[i] << " ";
  // }
  // cout << endl;

  // Variation 3: Print complete pascal triangle
  int n;
  cin >> n;
  vector<vector<int>> ans = pascalTriangle3(n);
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}