#include<bits/stdc++.h>

using namespace std;

void PrintQueue(queue <int> q){
  queue <int> q1 = q;
  for(int i = 1; i <= q.size(); i++){
    cout << q1.front() << " ";
    q1.pop();
  }
  
cout << endl;
}

int main() {

// Declaration
queue <int> q;
q.push(1); 
q.push(2); 
q.push(3); 
q.push(4); 
q.emplace(5);
PrintQueue(q);

q.back() += 10;
cout << q.back() << endl;
PrintQueue(q);
cout << q.front()<< endl;
cout << q.back()<< endl;
q.pop();
PrintQueue(q);

cout << q.empty() << endl;
queue <int> q1;
q1.emplace(10);
q1.emplace(30);
q1.emplace(40);
q1.emplace(50);
q1.emplace(90);
//Before swap
PrintQueue(q1);
PrintQueue(q);

//swapping
q.swap(q1);
//After swap
PrintQueue(q1);
PrintQueue(q);

}