#include<bits/stdc++.h>
using namespace std;

void displayName(){
  cout << "Hi Aadish Jain !!" << endl;
}

void printSum(int num1, int num2){
  cout << "Sum is: " << num1 + num2 << endl;
}
int sum(int num1, int num2){
  return num1 + num2;
}

int main(){
  displayName();
  int n1, n2;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;
  printSum(n1, n2);
  int res = sum(n1, n2);
  cout << "Sum is: " << res << endl;
  return 0;
}