#include<bits/stdc++.h>
using namespace std;
/*

    // Topic-> Unordered map
    1. insert()
    2. find()
    3. count()
    4. erase()
|--------------------|------------------|
|           Map      |   Unordered Map  |
|         Sorted     |      Unsorted    |
|           BST      |      Hashing     |
|Avg. ->  O(logN)    |         O(1)     |
|Worst -> O(N)       |         O(N)     |
|--------------------|------------------|

*/
int main()
{
    unordered_map<int,int> mp;
    mp.insert({1,2}); // key->1 and value->2
    mp[3] = 5; // key->3 and value->5
    mp[4] = 8; // key->4 and value->8
    mp[2] = 10;// key->2 and value->10

        for(auto x:mp)
    {
        cout<<x.first<<"->"<<x.second<<endl;
    }

    // find()
    auto val = mp.find(1);
    cout<<val->first<<" "<<val->second<<endl;
    
    
    // searching
    if(mp.find(5)!=mp.end()){ // method 1
        cout<<"present\n";
    }
    else{
        cout<<"absent\n";
    }

    if(mp[4]){ // method 2
        cout<<"present\n";
    }
    else{
        cout<<"absent\n";
    } 


 
}