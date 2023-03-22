#include <bits/stdc++.h>
using namespace std;

void LinearSearch(int arr[], int n, int num)
{
  for (int i = 0; i < n; i++)
  {
    if (num == arr[i])
    {
      cout << i;
      break;
    }
  }
  cout << "Number not available in given array";
}

int main()
{
  int n, num;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Search number: ";
  cin >> num;
  LinearSearch(arr, n, num);
  return 0;
}