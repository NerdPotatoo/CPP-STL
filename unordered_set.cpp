#include<bits/stdc++.h>
using namespace std;
/*

    // Topic-> Unordered Set
    1. insert()
    2. find()
    3. count()
    4. erase()

    Features of Set
    -> Sorted Order
    -> Unique Elements
|--------------------|-----------------|
|           Set      |   Unordered Set |
|         Sorted     |      Unsorted   |
|           BST      |      Hashing    |
|Avg. ->  O(logN)    |         O(1)    |
|Worst ->   O(N)     |         O(N)    |
|--------------------|-----------------|

*/
int main()
{
  unordered_set<int> s;
 
  // insert()  
  s.insert(5); 
  s.insert(3); 
  s.insert(4); 
  s.insert(2); 
  s.insert(1); 

  // find()
  auto x = s.find(4);  // O(logN)
  cout<< *x<<endl;

  // count()
  if(s.count(3)){
    cout<<"present\n";
  }
  else{
    cout<<"absent\n";
  }
  // traversing set
  for(auto x:s){
    cout<<x<<" ";
  }
  cout<<endl;
  // erase()
  s.erase(3); // O(logN)
  for(auto x:s){
    cout<<x<<" ";
  }
  cout<<endl;
  s.erase(x); // O(1)
  for(auto x:s){
    cout<<x<<" ";
  }
}