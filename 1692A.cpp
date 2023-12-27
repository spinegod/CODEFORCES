#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        int maxi = 0;
        int cnt=0;
        for(int i=0;i<4;i++){
            cin>>arr[i];
            maxi = arr[0];
            if(arr[i]>maxi) cnt++;
        }
        cout<<cnt<<endl;
    }
}