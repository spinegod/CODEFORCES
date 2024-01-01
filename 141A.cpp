
#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    vector<int> v(26,0);
    for(ll i=0;i<str1.length();i++){
        v[str1[i]-'A']++;
    }
    for(ll i=0;i<str2.length();i++){
        v[str2[i]-'A']++;
    }
    bool flag2=1;
    for(ll i=0;i<str3.length();i++){
        if(v[str3[i]-'A']!=0){
            v[str3[i]-'A']--;
        }
        else{
            flag2=0;
            break;
        }
    }
    bool flag=1;
    if(flag2==0){
        cout<<"NO";
    }
    else{
        for(auto k: v){
           if(k!=0){
              cout<<"NO";
              flag=0;
              break;
            }
        }
        if(flag==1){
            cout<<"YES";
        }
    }
}