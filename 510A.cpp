
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
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            bool snake = false;
            if(i%2==1) snake=true;
            else{
                if(i%4==2){
                    snake = (j==m);
                }
                if(i%4==0){
                    snake = (j==1);
                }
            }
            cout<<(snake?"#":".");
        }
        cout<<endl;
    }
}