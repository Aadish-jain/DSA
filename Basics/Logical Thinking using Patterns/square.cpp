#include<bits/stdc++.h>
using namespace std;

void PrintPattern(int n){
  for(int i = 0; i< n; i++){
    for(int j = 0; j < n; j++){
      cout << "* ";
    }
    cout << endl;
  }
}
int main(){
  int input;
  cin >> input;
 PrintPattern(input);
}