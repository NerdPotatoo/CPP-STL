#include<bits/stdc++.h>
using namespace std;
/*
    Topic - 
    1. compataror sort
*/
bool comp(pair<int,int> a, pair<int,int> b)
{
    return a.second < b.second;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    // ascending sort
    sort(v.begin(),v.end());
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // descending sort
    sort(v.begin(),v.end(), greater<int>());
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    

    vector<pair<int,int>> vp;
    for(int i = 0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        vp.push_back({x,y});
    }
    // default sort
    sort(vp.begin(),vp.end());
    for(int i = 0; i<n; i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }

    cout <<"---"<<endl;
    // sort based on second value
    sort(vp.begin(),vp.end(), comp);
    for(int i = 0; i<n; i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }

}