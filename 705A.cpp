
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
    ll cnt=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            if(i!=n){
                cout<<"I hate that"<<" ";
            }
            else{
                cout<<"I hate it";
            }
        }
        else{
            if(i!=n){
                cout<<"I love that"<<" ";
            }
            else{
                cout<<"I love it";
            }
        }
    }
}