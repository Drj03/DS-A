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
  int solve() {

 int n,m;
  in>>n>>m;
  vector<vector<int>> acc(n, vector<int>(m));
  loop(i,0,n) {
    loop(j,0,m) {
      in>>acc[i][j];
    }
  }
  int sum,maxx=-1,ans=-1;
  for (int i=0;i<n;i++) {
    sum=0 ;
    for(int j=0;j<m;j++) {
      sum +=acc[i][j];
    }

    if(sum>maxx) ans = i + 1;
    maxx = max(maxx,sum);

  }

  out<<sum<<endl;
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