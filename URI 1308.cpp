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
