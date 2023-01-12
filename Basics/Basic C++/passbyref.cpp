#include <bits/stdc++.h>
using namespace std;

// pass by reference
void display(int &n) //passing the original value using &n not copy
{  
  cout << "Num is: " << n << endl;
  n += 5;
  cout << "Num is: " << n << endl;
  n += 5;
  cout << "Num is: " << n << endl;
}
int main(){
 int num = 10;
  display(num);
cout << "Original number is now: " << num << endl;
  
  return 0;
}