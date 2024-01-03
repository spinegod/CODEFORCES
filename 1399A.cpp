
#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        bool flag=1;
        for(ll i=1;i<n;i++){
            if((arr[i]-arr[i-1])>1){
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
    }
}