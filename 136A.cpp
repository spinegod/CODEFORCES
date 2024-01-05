
#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    int arr[n];
    vector<pair<int,int>> vp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        vp.push_back({arr[i],i});
    }
    sort(vp.begin(),vp.end());
    for(auto k: vp){
        cout<<k.second+1<<" ";
    }

}