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
    int v[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1) cnt++;
    }
    if(cnt>=1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
}