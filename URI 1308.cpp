#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

ll root(ll a,ll b,ll c)
{
  double det=0;
  det=b;
  det*=b;
  det+=(4*a*double(c));
  //cout <<det<<endl;
  det=sqrt(det);
  det-=b;
  det/=(2*a);
  ll ans=floor(det);
  ll ansr=floor(det+0.5);
  if(ansr==ans)
    return ans;
  return ansr-1;
}
int main()
{
  int T;
  cin >> T;
  for(int tc=1;tc<=T;tc++)
  {
    ll n;
    cin >> n;
    cout << root(1,1,2*n)<<endl;
  }
}


/*
  Second solution: invloves binary search.

#include <iostream>
#define ll unsigned long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

ll f(ll n)
{
  return n*(n+1)/2;
}
int main()
{
  //freopen("in.txt","r",stdin);
  //freopen("out.txt","w",stdout); -_- 

  int t;
  cin >> t;
  while(t--)
  {
    ll n;
    cin >> n;
    if(n==0){
       cout << 0 <<endl;
       continue;
    }
    if(n==1){
      cout << 1 <<endl;
      continue;
    }
    ll lo=1;
    ll hi=1e10+1;
    ll mid=lo+(hi-lo)/2;
    while(hi-lo>1)
    {
      mid=lo+(hi-lo)/2;
      ll ans=f(mid);
      if(ans>n)
      {
        hi=mid;
      }
      else if(ans<=n){
        lo=mid;
      }
    }
    cout <<lo <<endl;
    //cout <<"lo,hi: "<<

  }
}



*/
