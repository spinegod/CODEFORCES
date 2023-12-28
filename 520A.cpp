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
    string str;
    cin>>str;
    for(auto& s: str){
        s = tolower(s);
    }
    set<char>st;
    for(auto s: str){
        st.insert(s);
    }
    int len = st.size();
    if(len==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}