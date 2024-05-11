#include<bits/stdc++.h>
using namespace std;

/*
    Topics-
    1. binary_search()
    2. upper_bound()
    3. lower_bound()

    Sorted, O(logN)
|---------------------------------------|----------------------------|
|                  lower bound          |         upper bound        |
|if found ->   1. returns iterator      |    1. returns Next iterator|
|else     ->   2. returns next iterator |    2. returns Next iterator|
|---------------------------------------|----------------------------|
*/

int main()
{
    // binary_search()
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int ans = binary_search(arr,arr+n,4);  // either 1 or 0 
    // if present print 1 else 0
    cout<<ans<<endl;

    // lower_bound()

    auto itr = lower_bound(arr,arr+n,4);
    cout<<*itr<<endl;

    // if want index

    auto idx = lower_bound(arr,arr+n,9) - arr; // just subtract begin index
    cout<<idx<<endl;

    // upper_bound()

    auto it = upper_bound(arr,arr+n,5);
    cout<<*it<<endl;

    // if want index

    auto indx = upper_bound(arr,arr+n,3) - arr; // just subtract begin index
    cout<<indx<<endl;

}