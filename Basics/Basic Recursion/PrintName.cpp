#include<bits/stdc++.h>
using namespace std;

int cnt = 1;
void printName(int n){
  if(cnt > n){
    return;
  }
  cout << "Aadish" << " ";
  cnt++;
  printName(n);
}

void printName1(int i,int n){
  if(i > n){
    return;
  }
  cout << "Aadish" << " ";
  printName1(i + 1, n);
}


int main()
{
  int n;
  cin >> n;
  printName(n);     //with global variable cnt
  cout << endl;
  printName1(1,n);
  return 0;
}