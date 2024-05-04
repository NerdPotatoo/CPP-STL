#include<bits/stdc++.h>
using namespace std;
/*

    // Topic-> Lists
    1. push_front()
    2. push_back()
    3. pop_front()
    4. pop_back()
    5. front()
    6. back()
    7. reverse()
    8. sort()

*/
int main()
{
    list<int> li;
    
    // push_back() & push_front()
    li.push_back(10); // 10
    li.push_back(20); // 10 20
    li.push_front(30);// 30 10 20

    list<int> :: iterator it; // Making iterator 
    for(it = li.begin(); it != li.end(); it++){
        cout<<*(it)<<" "; // [it] Is Basically Location [*] Is Value At .....
    }
    cout<<endl;

    // front() & back()
    cout<<li.front()<<endl; // 30
    cout<<li.back()<<endl;  // 20

    // reverse();
    li.reverse();
    for(it = li.begin(); it != li.end(); it++){
        cout<<*(it)<<" "; 
    }
    cout<<endl;

    // sort()
    li.sort();
    for(it = li.begin(); it != li.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    // pop_front()
    li.pop_front(); // 20 30
    for(it = li.begin(); it != li.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    
    // pop back()
    li.pop_back();
    for(it = li.begin(); it != li.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
}