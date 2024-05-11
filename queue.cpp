#include<bits/stdc++.h>
using namespace std;
/*

    // Topic-> Queue
    1. push()
    2. pop()
    3. size()
    4. front()
    5. back()
    6. empty()

    FIFO Operation

*/
int main()
{
    queue<int> q;

    //push()
    q.push(1); // 1
    q.push(2); // 1 2
    q.push(3); // 1 2 3
    q.push(4); // 1 2 3 4

    cout<<q.size()<<endl; // 4
    cout<<q.front()<<endl; // 1
    cout<<q.back()<<endl; // 4
    cout<<q.empty()<<endl; // 0 which is False

    // empty() & front() & pop()
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}