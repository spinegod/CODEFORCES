
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
        string str;
        cin>>str;
        set<char>st;
        for(ll i=0;i<str.length();i++){
            st.insert(str[i]);
        }
        cout<<st.size()+n<<endl;

    }
}