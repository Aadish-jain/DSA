#include <bits/stdc++.h>
using namespace std;

// print max heap
void Printpq(priority_queue <int> pq){
  priority_queue <int> pq1 = pq;
  for(int i = 1; i<= pq.size(); i++){
    cout << pq1.top() << " ";
    pq1.pop();
  }
  cout <<endl;
}

// print min heap
void Printmin_pq(priority_queue <int, vector<int>, greater<int> > pq)
{
  priority_queue <int, vector<int>, greater<int> > pq1 = pq;
  for(int i = 1; i<= pq.size(); i++){
    cout << pq1.top() << " ";
    pq1.pop();
  }
  cout <<endl;
}
//normal or max heap
void Max_heap(){
  priority_queue <int> pq;
  pq.push(2);
  pq.push(4);
  pq.emplace(1);
  pq.emplace(10);
  cout<< "Max heap: ";
  Printpq(pq);
}

//min heap
void Min_heap(){
  priority_queue <int, vector <int>, greater <int> > min_pq;
  min_pq.push(2);
  min_pq.push(4);
  min_pq.emplace(1);
  min_pq.emplace(10);
  cout<< "Min heap: ";
  Printmin_pq(min_pq);
}
int main()
{
  Max_heap();
  Min_heap();
  return 0;
}