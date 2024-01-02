
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
    ll police=0;
    ll crime=0;
    ll unc=0;
    int arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==-1){
            if(police==0){
                unc++;
            }
            else{
                //unc--;
                police--;
            }
        }
        else{
            police+=arr[i];
        }
    }
    cout<<unc;
}