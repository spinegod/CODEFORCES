#include <bits/stdc++.h>
#define ll long long
#define srt  sort(nums.begin(),nums.end());
using namespace std;

 
const int MAXN   = 1E5 + 15;
const double eps = 1E-7;
const int MOD    = 1E9 + 7;
 
 
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
int lcm(int a, int b) {
    return (std::abs(a) / gcd(a, b)) * std::abs(b);
}
 
bool is_prime(int num) {
    if (num < 2)    return false;
    if (num == 2 || num == 3)   return true;
    if (num % 2 == 0 || num % 3 == 0)   return false;
    int i = 5, w = 2;
    while (i * i <= num) {
        if (num % i == 0)   return false;
        i += w; w = 6 - w;
    }return true;
}
 
void primeFactor(int n, vector<int> &nums) {
    while (n % 2 == 0) {
        nums.push_back(2);
        n = n / 2;}
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            nums.push_back(i);
            n = n / i;}}
    if (n > 2)  nums.push_back(n);
}
 
ll t,n,k,temp,sum,ans,a,b,c,x,y,z,mx=INT_MIN,mi=INT_MAX;
char ch;
map<ll,ll> mp;
string str;
void solve(){
    cin>>n>>t;
    vector<ll> nums(n);
    vector<ll> ans;
    for(ll i=0;i<n;i++){
      cin>>nums[i];
    }
    srt;
    while(t--){
      cin>>a>>b;
      for(ll i=n-1;i>=n-a;i--){
        ans.push_back(nums[i]);
      }
      sort(ans.begin(),ans.end());
      sum=0;
      ll len=ans.size();
      for(ll i=0;i<=len-b;i++){
        sum+=ans[i];
      }
      cout<<sum<<endl;
      ans.clear();
    }
}
int main(){
    // ll n,t;
    // cin>>n>>t;
    // while(t--){
        solve();
    
}
// //997404
// 1993541
// 996137
// 2988916
// 1991512
// 995375

// 997404
// 996137
// 1993541
// 995375
// 1991512
// 2988916