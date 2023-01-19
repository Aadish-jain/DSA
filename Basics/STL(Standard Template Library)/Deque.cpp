#include<bits/stdc++.h>

using namespace std;

void printDeque(deque<int> dq){
    for(deque<int> :: iterator it = dq.begin();
   it != dq.end();it++){
    cout << *it << " ";
   }
   cout << endl;
}
void ExplainDeque(){

  // Declaration
  deque <int> dq;
  
  // insert data
  dq.push_back(10);
  dq.push_front(20);
  dq.emplace_back(30);
  dq.emplace_front(40);

printDeque(dq);

   dq.pop_back();
   printDeque(dq);
   dq.pop_front();
   printDeque(dq);

   int a = dq.back();
   cout << a <<endl;
   int b = dq.front();
   cout << b << endl;
   
}

int main(){
  ExplainDeque();
  return 0;
}