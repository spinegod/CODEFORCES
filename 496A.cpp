#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>mp;
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
        mp[arr1[i]]++;
    }
    int o;
    cin>>o;
    int arr2[o];
    for(int i=0;i<o;i++){
        cin>>arr2[i];
        mp[arr2[i]]++;
    } 
    int st=1;
    bool flag=1;
    vector<int>ans;
    for(auto k: mp){
        if(k.first==st&&k.second>0){
            ans.push_back(st);
        }
        st++;
    }
    int len = ans.size();
    if(len!=n){
        flag=0;
    }
    if(flag==1){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}