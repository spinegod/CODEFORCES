#include<iostream>
#include<math.h>
#include<limits.h>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n=4;
    int arr[4];
    set<int>st;
    for(int i=0;i<4;i++){
        cin>>arr[i];
        st.insert(arr[i]);
    }
    cout<<4-st.size();
}