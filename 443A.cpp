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
    getline(cin,str);
    set<char>st;
    for(int i=0;i<str.length();i++){
        st.insert(str[i]);
    }
    int res = (st.size()-4);
    if(st.size()==2){
        cout<<"0";
    }
    else if(st.size()==3){
        cout<<"1";
    }
    else{
        cout<<res;
    }
}