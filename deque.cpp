#include<bits/stdc++.h>
using namespace std;
/*

    // Topic-> Deque
    1. push_front()
    2. push_back()
    3. pop_front()
    4. pop_back()
    5. front()
    6. back()

    Operation From Both Side Possible
*/
int main()
{
    deque<int> dq;
    
    // push_back() & push_front()
    dq.push_back(10); // 10
    dq.push_back(20); // 10 20
    dq.push_front(30);// 30 10 20
    dq.pop_back(); // 30 10
    dq.pop_front(); // 10

    // empty() & pop_front() & front()
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
}