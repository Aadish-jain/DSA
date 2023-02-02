#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void print()
{
  if (cnt == 5)
  {
    return;
  }
  cout << cnt << endl;
  cnt++;
  print();
}

/* Print numbers from 1 to N without the help of loops.
Input:
N = 10
Output: 1 2 3 4 5 6 7 8 9 10
*/
int cnt1 = 1;
int printNum(int N)
{
  if (cnt1 > N)
  {
    return 0;
  }
  cout << cnt1 << " ";
  cnt1++;
  printNum(N);
}

/*
Print numbers from N to 1 (space separated) without the help of loops.
Input:
N = 10
Output: 10 9 8 7 6 5 4 3 2 1
*/

void printRevNum(int n)
{
  if (n <= 0)
  {
    return;
  }
  cout << n << " ";
  n--;
  printRevNum(n);
}

void printNum1(int i, int n)
{
  if (i > n)
  {
    return;
  }
  cout << i << " ";
  printNum1(i + 1, n);
}

void printRevNum1(int i, int n)
{
  if(i < 1)
  {
    return;
  }
  cout << i << " ";
  printRevNum1(i - 1, n);
}

void printNum2(int i, int n)
{
  if(i < 1)
  {
    return;
  }
  printNum2(i - 1, n);
  cout << i << " ";
}

void printRevNum2(int i, int n)
{
  if(i > n)
  {
    return;
  }
  printRevNum2(i + 1, n);
  cout << i << " ";
}

int main()
{
  int n;
  cin >> n;
  // with cnt
  print();
  printNum(n);
  cout << endl;
  printRevNum(n);
  cout << endl;
  // without cnt
  printNum1(1, n);
  cout << endl;
  printRevNum1(n,n);
  cout << endl;
  // with Backtracking
  printNum2(n,n);
  cout << endl;
  printRevNum2(1,n);
  
  return 0;
}