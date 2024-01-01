
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
        string str;
        cin>>str;
        ll fs=0;
        ll ls=0;
        for(ll i=0;i<str.length();i++){
            if(i<3) fs+=str[i];
            else ls+=str[i];
        }
        if(fs==ls){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}