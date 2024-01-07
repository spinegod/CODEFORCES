
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
            ll len=n/2;
            vector<int> v(n);
            if(len%2!=0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                ll even=2,odd=1,es=0,os=0;
                for(ll i=0;i<len;i++){
                    v.push_back(even);
                    es+=even;
                    even+=2;
                }
                for(ll j=len;j<n-1;j++){
                    v.push_back(odd);
                    os+=odd;
                    odd+=2;
                }
                ll last = es-os;
                v.push_back(last);
                for(auto k: v){
                    if(k!=0){
                        cout<<k<<" ";
                    }
                }
                cout<<endl;
            }
        }
        return 0;
    }