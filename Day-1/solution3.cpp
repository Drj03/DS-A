#include<bits/stdc++.h>
#define lli long long int
#define print(result) cout<<result<<endl;
#define in cin
#define out cout
#define vi vector<int>
#define mod 1000000007 
#define f first
#define loop(i, a, b) for(int i = (a); i < (b); i++)
#define s second      
#define pb(x) push_back(x)                              
using namespace std;
 
  void solve() {
  int n,key;
  in>>n;
  int a[n];
  loop(i,0,n) in>>a[i];
  int a2[n];
  int start = 0;
  int mid = n / 2;

  for (int i = 0 ; i < n ; i++) {
    if (i % 2 == 0 ) a2[i] = a[start++];
    else a2[i] = a[mid++];
  }

  loop(i,0,n) out<<a2[i]<<" ";
}
 
  
  int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout); 
  #endif
  
 solve();
}