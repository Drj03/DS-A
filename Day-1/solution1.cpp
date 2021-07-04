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
  int n;
  cin >> n;
  int a[n];
  loop(i, 0, n) in>>a[i];
  int start = 0, end = 1;
  while ( start < n - 1) {
    if (a[start] != a[start + 1]) {
      a[end] = a[start + 1];
      end++;
    }
    start++;
  }

  loop(i,0,end) cout << a[i] << " ";

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