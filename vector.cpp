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
    cout << "Pushing element\n";
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    
    // size()
    cout<<endl;
    cout<<"size - "<<v.size()<<endl;
    
    // pop_back()
    cout <<"Poping element\n";
    v.pop_back();
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    cout<<"size - "<<v.size()<<endl;
    
    // resize();
    cout<<"Resizing vector\n";
    v.resize(5);
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    v.resize(2);

    // begin() & end()
    cout << "Using Begin() & End()\n";
    cout<<*(v.begin())<<endl; // first 
    cout<<*(v.begin()+1)<<endl; // second  
    cout<<*(v.end())<<endl; // last
    
    // erase()
    cout<< "Erasing elements\n";
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    v.erase(v.begin()+2); // erase one element 
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    v.erase(v.begin()+1, v.begin()+3); // erase range
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    // insert()
    cout<<"Inserting elements\n";
    v.insert(v.begin()+2, 8);
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    // reverse()
    cout<<"Reversing a Vector\n";
    reverse(v.begin(),v.end());
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    // sort()
    cout<<"Sorting a vector\n";
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    // clear() & empty()
    v.clear();
    cout<<"After clear size - "<<v.size()<<endl;
    if(v.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }

    

}