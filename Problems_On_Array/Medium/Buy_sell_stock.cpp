#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int prices[n];
  for (int i = 0; i < n; i++)
  {
    cin >> prices[i];
  }
  // int mini = prices[0];
  // int maxProfit = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   int cost = prices[i] - mini;
  //   maxProfit = max(maxProfit, cost);
  //   mini = min(mini, prices[i]);
  // }
  // cout <<  maxProfit;

  // If array have multiple low cost.
  //   Input:
  // N = 7
  // A[] = { 100, 180, 260, 310, 40, 535, 695 }

  // Output:
  // (0 3) (4 6)

  // Explanation 1:
  // We can buy stock on day 0,
  // and sell it on 3rd day,
  // which will give us maximum profit.

  int i = 0, j = 0, profit = 0;
  for (int i = 0; i < n - 1; i++)
  {
    while (i < n - 1 && prices[i] < prices[i + 1])
    {
      i++;
    }
    if (i != j)
    {
      profit = 1;
      cout << "(" << j << " " << i << ")";
    }
    j = i + 1;
  }
  if (profit == 0) // or profit != 1 or !profit
  {
    cout << "No profit";
  }
  else
  {
    cout << endl;
  }
}
