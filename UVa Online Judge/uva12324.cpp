
#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0, _n = (n); i < _n; i++)
#define REPD(i,n) for(int i = (n) - 1; i >= 0; i--)
#define FOR(i,a,b) for (int i = (a), _b = (b); i <= _b; i++)
#define FORD(i,a,b) for (int i = (a), _b = (b); i >= _b; i--)
#define FORN(i,a,b) for(int i=a;i<b;i++)
#define FOREACH(it,c) for (__typeof((c).begin()) it=(c).begin();it!=(c).end();it++)
#define RESET(c,x) memset (c, x, sizeof (c))
 
#define PI acos(-1)
#define sqr(x) ((x) * (x))
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define Aint(c) (c).begin(), (c).end()
#define SIZE(c) (c).size()
 
 
#define DB(x) { cerr << #x << " = " << x << endl; }
#define PR(a,n) {cerr<<#a<<" = "; FOR(_,1,n) cerr << a[_] << ' '; cerr <<endl;}
#define PR0(a,n) {cerr<<#a<<" = ";REP(_,n) cerr << a[_] << ' '; cerr << endl;}
#define LL  long long
#define pii pair<LL, int>
#define SZ (1000000005)
#define ssz (600005)
#define s(t) (scanf("%d",&t))


using namespace std;
int main()
{

	#ifndef ONLINE_JUDGE
       	freopen("in","r",stdin);
       	//freopen("output.text","w",stdout);
       	#endif
	
	int n;
	cin >> n;
	vector <int> v,u;
	int total=0, sum = 0;
	while(n != 0){
		total = 0;
		sum = 0;
		v.clear();
		u.clear();
		REP(i,n){
			int x,y;
			cin >> x >> y;
			v.PB(x);
			u.PB(y);
			sum += x;
		}	
		multiset<int> s;

		REPD(i,n){
			if(u[i] != 0){
				REP(j,u[i]){
					if(!s.empty()){
						sum -= (*s.rbegin())/2;
						
						multiset<int>:: iterator it;
						it = s.find(*s.rbegin());
						s.erase(it);
					}
				}
			}
			s.insert(v[i]);
		}
		cout << sum << endl;
		cin >> n;
	}
	
	
}	
