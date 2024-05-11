#include<bits/stdc++.h>
using namespace std;

/*
    Topics-
    1. *max_element()
    2. next_permutation()
    3. __builtin_popcount()
    4. binary_search()
*/

int main()
{
    // *max_element(start_index, end_index)
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int mx = *max_element(arr,arr+n);
    cout<<mx<<endl;

    // next_permutation(start_index, end_index)
    string s = "ABC";

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    // __builtin_popcount(num)
    int num;
    cin>>num;
    int ans = __builtin_popcount(num); // counts set bit 
    cout<<ans<<endl;
    /*
    what is set bit?
    number of 1 in binary representation of a number.
    */

    // binary_search(start_index, end_index, Find_value) -> array need to be sorted

    sort(arr,arr+n);

    if(binary_search(arr,arr+n,1)){
        cout<<"Present\n";
    }
    else{
        cout<<"Absent\n";
    }
}