#include<bits/stdc++.h>
using namespace std;
/*

    // Topic-> Priority Queue
    1. push()
    2. pop()
    3. top()
    4. empty()
    5. size()

    -> TWO Implementation
        MinHeap, MaxHeap

*/
int main()
{
    priority_queue<int> pq; // Default -> max_heap

    //push()
    pq.push(1); // 1
    pq.push(2); // 2 1
    pq.push(3); // 3 2 1
    pq.push(4); // 4 3 2 1

    cout<<pq.size()<<endl; // 4

    // empty() & top() & pop()
    while(!pq.empty()){
        int val = pq.top();
        cout<<val<<" ";
        pq.pop();
    }
    cout << endl;
    
    priority_queue<int,vector<int>, greater<int> > pq1; // min_heap
    
    //push()
    pq1.push(1); // 1
    pq1.push(2); // 1 2
    pq1.push(3); // 1 2 3
    pq1.push(4); // 1 2 3 4

    cout<<pq1.size()<<endl; // 4

    // empty() & top() & pop()
    while(!pq1.empty()){
        int val = pq1.top();
        cout<<val<<" ";
        pq1.pop();
    }
}