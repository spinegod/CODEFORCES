
#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    for(ll i=n+1;i<100;i++){
        bool flag=1;
        for(ll j=2;j<100;j++){
            if(i%j==0&&i!=j){
                flag=0;
                break;
            }
        }
        if(flag==1){
            if(i==m){
                cout<<"YES";
                break;
            }
            else{
                cout<<"NO";
                break;
            }
        }
    }
}