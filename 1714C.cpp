
#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
// bool check(ll i, ll s)
// {
//     unordered_map<ll, ll> mp;
//     while (i > 0)
//     {
//         ll rem = i % 10;
//         mp[rem]++;
//         i /= 10;
//     }
//     ll sum = 0;
//     for (auto k : mp)
//     {
//         if (k.second > 1)
//         {
//             return false;
//         }
//         else
//         {
//             sum += k.first;
//         }
//     }
//     if (sum == s)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
int main()
{
    ll t;
    cin >> t;
    ll ans;
    string str;
    
    while (t--)
    {
        ll s;
        cin >> s;
        vector<int>v;
        for(int i=9;i>=1;i--){
            if(i<=s){
                v.push_back(i);
                s-=i;
            }
        }
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i];
        }
        cout<<endl;
    }
}