#include<bits/stdc++.h>
using namespace std;
/*

    // Topic-> Pairs
    // While Solving Graph Questions We Use Vector of Pairs

*/
int main()
{
    pair<int, int> p;
    p.first = 10;
    p.second = 20;
    cout<<"{"<<p.first<<","<<p.second<<"}"<<endl;

    //Chaining  Mostly Used For Graph Problems
    pair<int,pair<int,int> > pt;
    pt.first = 1;
    pt.second.first = 5;
    pt.second.second = 6;

    cout<<"{"<<pt.first<<",{"<<pt.second.first<<","<<pt.second.second<<"}}"<<endl;

    // Vector of Pairs
    int n; 
    cin>>n;
    vector<pair<int,int> > v;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        //v.push_back(make_pair(x,y)); // Method 1
        v.push_back({x,y});       // Method 2 (Easy)
    }

    for(int i=0; i<n; i++)
    {
        cout<<"{"<<v[i].first<<","<<v[i].second<<"}"<<endl;
    }
}