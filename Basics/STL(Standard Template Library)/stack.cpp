#include<bits/stdc++.h>

using namespace std;

int PrintStack(stack <int> st){
  stack <int> s = st;
  for(int i = 1; i<= st.size(); i++){
    cout << s.top() << " ";
    s.pop();
  }
  cout<< endl;
}
int PrintStackstr(stack <string> st){
  stack <string> s = st;
  for(int i = 1; i<= st.size(); i++){
    cout << s.top() << " ";
    s.pop();
  }
  cout<< endl;
}
int main(){

//Declaration
stack <int> s;
s.push(2);
s.push(4);
s.push(6);
s.push(8);
s.emplace(10);
cout << "Size of Stack is:  " <<s.size() << endl;
PrintStack(s);

stack <string> s1,s2;
s1.push("Aadish");
s1.push("Jain");
s1.push("AJ");
s1.push("C++");
s1.push("DSA");
cout<< "s1: ";
PrintStackstr(s1);

s2.emplace("aadish");
s2.emplace("code");
s2.emplace("practice");
s2.emplace("jain");
s2.emplace("vscode");
s2.emplace("text");
cout<< "s2: ";
PrintStackstr(s2);

s1.swap(s2);

cout<< "s1 after swapping: ";
PrintStackstr(s1);

cout<< "s2 after swapping: ";
PrintStackstr(s2);

cout << s1.top() << endl;
cout << s1.empty();

}