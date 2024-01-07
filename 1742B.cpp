
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
        while(t--){
            ll n;
            cin>>n;
            vector<int> v(n);
            for(ll i=0;i<n;i++){
                cin>>v[i];
            }
            bool flag = 1;
            sort(v.begin(),v.end());
            for(ll i=1;i<n;i++){
                if(v[i]<=v[i-1]){
                    flag=0;
                    break;
                }
            }
            if(flag==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        return 0;
    }