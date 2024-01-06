
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
        ll a;
        vector<int> v1,v2,v3;
        for(ll i=1;i<=n;i++){
            cin>>a;
            if(a==1){
                v1.push_back(i);
            }
            if(a==2){
                v2.push_back(i);
            }
            if(a==3){
                v3.push_back(i);
            }
        }
        ll ans= min(min(v1.size(),v2.size()),v3.size());
        cout<<ans<<endl;
        for(ll i=0;i<ans;i++){
            cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
        }
        return 0;

    }