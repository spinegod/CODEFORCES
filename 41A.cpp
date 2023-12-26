#include<iostream>
#include<math.h>
#include<limits.h>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    bool flag=1;
    int i=0,j=t.length()-1;
    if(s.length()!=t.length()){
        cout<<"NO";
    }
    else{
        while(i<s.length()){
            if(s[i]!=t[j]){
                cout<<"NO";
                flag=0;
                break;
            }
            i++;
            j--;
        }
        if(flag==1){
            cout<<"YES";
        }
    }
}