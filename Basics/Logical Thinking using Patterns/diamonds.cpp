#include<bits/stdc++.h>

using namespace std;
void Diamond(int n){
  for(int i = 1; i<=n; i++){
    for(int j = 1; j <= n -i; j++){
      cout << " ";
    }
    for(int j = 1; j <= i; j++){
      cout << "* ";
    }
    for(int j = 1; j <= n -i; j++){
      cout << " ";
    }
    cout<<endl;
  }
  
  for(int i = 1; i<=n; i++){
    for(int j = 1; j < i; j++){
      cout << " ";
    }
    for(int j = n; j >= i; j--){
      cout << "* ";
    }
    for(int j = 1; j < i; j++){
      cout << " ";
    }
    cout<<endl;
  } 
}

void HalfDiamond(int n){
  for(int i = 1; i <= 2*n -1; i++){
    int stars = i;
    if(i>n){stars = 2*n - i;}
    for(int j = 1; j<= stars;j++){
      cout<< "*";
    }
    cout <<endl;
  }
}

void onezero(int n){
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
      if( (i + j) % 2 != 0){
        cout << 0;
      }
      else
      {
      cout << 1;
      }
    }
    cout <<endl;
  }
}

int main(){
  int input;
  cin >> input;
  Diamond(input);
  HalfDiamond(input);

  onezero(input);
  return 0;
}