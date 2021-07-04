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
  int n,key; in>>n;
  int a[n];
  loop(i,0,n) in>>a[i];

  in>>key;
  int x=0;
  int y=n-1;

  while (x<y) {
    if (a[x]==key) swap(a[x], a[y]) , y--;
    else x++;
  }

  loop(i,0,x+1)out<<a[i]<< " ";

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