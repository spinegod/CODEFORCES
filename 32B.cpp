
#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string str;
    cin>>str;
    for(ll i=1;i<=str.length();i++){
        if(str[i-1]=='.'){
            cout<<'0';
        }
        if(str[i-1]=='-'&& str[i]=='.'){
            cout<<'1';
            i++;
        }
        if(str[i-1]=='-'&&str[i]=='-'){
            cout<<'2';
            i++;
        }
    }
}