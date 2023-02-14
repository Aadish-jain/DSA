#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  cin >> str;
  
  //pre-compute
  int hash[256] = {0};     //for ASCII code 
  
  for(int i = 0; i < str.length(); i++)
  {
    hash[str[i]] += 1;
  }
  // for(int i = 0; i < 256; i++)
  // {
  //   cout << hash[i] << " ";
  // }
  
  int q;
  cin >> q;

  while(q--){
    char s;             // character automatically typecast into integer Eg: 'a' -> 97, 'A' -> 65
    cin >> s;
    //fetch
    cout <<s <<" appears " << hash[s] << " times "<< endl;
  }


// using map
  map <char, int> mpp;
  for(int i = 0;i < str.length();i++)
  {
    mpp[str[i]]++;
  }


 for (auto it : mpp){
  cout << it.first << "->" << it.second << endl;
 }
  int q2;
  cin >> q2;
  while(q2--){
    char s1;             // character automatically typecast into integer Eg: 'a' -> 97, 'A' -> 65
    cin >> s1;
    //fetch
    cout <<s1 <<" appears " << mpp[s1] << " times "<< endl;
  }

// using unordered_map
  unordered_map <char, int> mpp1;
  for(int i = 0;i < str.length();i++)
  {
    mpp1[str[i]]++;
  }


 for (auto it : mpp1){
  cout << it.first << "->" << it.second << endl;
 }
  int q3;
  cin >> q3;
  while(q3--){
    char s2;             // character automatically typecast into integer Eg: 'a' -> 97, 'A' -> 65
    cin >> s2;
    //fetch
    cout <<s2 <<" appears " << mpp1[s2] << " times "<< endl;
  }

  return 0;
}