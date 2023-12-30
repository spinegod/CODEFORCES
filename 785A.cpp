
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
    string arr[t];
    ll cnt=0;
    for(ll i=0;i<t;i++){
        cin>>arr[i];
        if(arr[i]=="Tetrahedron") cnt+=4;
        else if(arr[i]=="Cube") cnt+=6;
        else if(arr[i]=="Octahedron") cnt+=8;
        else if(arr[i]=="Dodecahedron") cnt+=12;
        else if(arr[i]=="Icosahedron") cnt+=20;
    }
    cout<<cnt<<endl;
}