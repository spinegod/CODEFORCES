
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
        vector<int> arr(t);
        for(ll i=0;i<t;i++){
            cin>>arr[i];
        }
        ll maxi = *max_element(arr.begin(),arr.end());
        ll cnt=0;
        for(auto k: arr){
            cnt+=abs(maxi-k);
        }
        cout<<cnt<<endl;
    }