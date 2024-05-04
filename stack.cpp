#include<bits/stdc++.h>
using namespace std;
/*

    // Topic-> Stack
    1. push()
    2. pop()
    3. size()
    4. empty()
    5. top()

    LIFO Operation
*/
int main()
{
    stack<int> s;
    
    //push()
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    // top()
    cout<<s.top()<<endl; // 4

    // pop()
    s.pop();
    cout<<s.top()<<endl; // 3

    // size()
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;

    // empty()
    if(s.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }

    // Printng stack
    while(!s.empty()){  // 30 20 10 3 2 1 LIFO
        int val = s.top();
        cout<<val<<" ";
        s.pop();
    }
}