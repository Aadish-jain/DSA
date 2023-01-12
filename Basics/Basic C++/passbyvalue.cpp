#include <bits/stdc++.h>
using namespace std;
// pass by value
void printNum(int n)
{
  cout << "number is: " << n << endl;
  n += 5;
  cout << "number is: " << n << endl;
}

void name(string s){
  s[5] = 'z';
  cout << s << endl;
}

int main()
{
  int num;
  cin >> num;
  printNum(num);
  cout << "Original number is still: " << num << endl;
  string str = "Aadish";
  name(str);
  cout << "Original name is still: " << str << endl;
  
}