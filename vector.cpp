#include<bits/stdc++.h>
using namespace std;
/*

    // Topic-> Vectors
    1. push_back()
    2. pop_back()
    3. size()
    4. resize()
    5. begin()
    6. end()
    7. clear()
    8. empty()
    9. erase()
    10. insert()
    11. reverse()
    12. sort()

*/
int main()
{
    vector<int> v;
    // push_back()
    v.push_back(4); // 4
    v.push_back(5); // 4 5
    v.push_back(6); // 4 5 6
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    // size()
    cout<<v.size()<<endl; // 3
    
    // pop_back()
    v.pop_back(); // 4 5
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    cout<<v.size()<<endl; // 2
    
    // resize();
    v.resize(5); // 4 5 0 0 0 
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    v.resize(2); // 4 5

    // begin() & end()
    cout<<*(v.begin())<<endl; // 4
    cout<<*(v.begin()+1)<<endl; // 5 
    cout<<*(v.end()-1)<<endl; // 5
    
    // erase()
    v.push_back(6); // 4 5 6
    v.push_back(7); // 4 5 6 7
    v.push_back(9); // 4 5 6 7 9
    v.push_back(10); // 4 5 6 7 9 10
    v.push_back(11); // 4 5 6 7 9 10 11
    
    v.erase(v.begin()+2); // erase one element {4 5 7 9 10 11}
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    v.erase(v.begin()+1, v.begin()+3); // erase range {4 9 10 11}
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    // insert()
    v.insert(v.begin()+2, 8); // 4 9 8 10 11
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    // reverse()
    reverse(v.begin(),v.end()); // 11 10 8 9 4
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    // sort()
    sort(v.begin(), v.end()); // 4 8 9 10 11
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    // clear() & empty()
    v.clear();// Empty vector 
    cout<<v.size()<<endl; // 0
    
    if(v.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }

    

}