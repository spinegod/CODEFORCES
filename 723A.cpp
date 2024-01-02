
#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll p,q,r;
    vector<int> arr(3);
    for(ll i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll sum=0;
    sum+=arr[1]-arr[0];
    sum+=arr[2]-arr[1];
    cout<<sum;

}