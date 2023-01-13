#include<bits/stdc++.h>

using namespace std;

void  SquarePattern(int n){

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << "* ";
    }
    cout <<endl;
  }
}

void Trianglestarpattern(int n){
  for(int i = 1; i <= n;i++){
    for(int j = 1; j <= i; j++){
      cout << "* ";
    }
    cout << endl;
  }
}

void TrianglenumPattern(int n){
  for(int i = 1; i<=n; i++){
    for(int j = 1; j<= i; j++){
      cout << j;
    }
    cout << endl;
  }
}

void TriangleSamenumPattern(int n){
  for(int i = 1; i<=n; i++){
    for(int j = 1; j<=i; j++){
      cout << i;
    }
    cout <<endl;
  }
}

void TriangleReversestar(int n){
  for(int i = n; i >= 1; i--){
    for(int j = 1; j <=i; j++){
      cout << "* ";
    }
    cout <<endl;
  }
}

void TriangleReverseNum(int n){
  for(int i = 1; i <=n; i++){
    for(int j = 1; j <= n - i + 1; j++){
      cout<< j;
    }
    cout<< endl;
  }
}


void TriangleSpaceStar(int n){
  for(int i = 0; i < n; i++){
    for(int j = 1; j < n - i; j++){
      cout << " ";
    }
    for(int j = 1; j <= 2*i + 1; j++){
      cout<< "*";
    }
    for(int j = 1; j < n - i; j++){
      cout << " ";
    }
    cout << endl;
  }
}


void TriangleReverseSpaceStar(int n){
  for(int i = 0; i < n; i++){
    for(int j = 1; j <= i; j++){
      cout << " ";
    }
    for(int j = 1; j <= 2*n - (2*i + 1); j++){
      cout << "*";
    }
        for(int j = 1; j <= i; j++){
      cout << " ";
    }
    cout<< endl;
  }
}

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

int main(){
  int input;
  cin >> input;
  SquarePattern(input);
  Trianglestarpattern(input);
  TrianglenumPattern(input);
  TriangleSamenumPattern(input);
  
  TriangleReversestar(input);
  TriangleReverseNum(input);

  TriangleSpaceStar(input);
  TriangleReverseSpaceStar(input);
  cout<<endl;
  Diamond(input);

}