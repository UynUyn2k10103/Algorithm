#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;

const ll oo = 1e9 + 7;
ll a[11][11], b[11][11];
int n;
long long k;

void tichmt(ll x[11][11], ll y[11][11])
{
	ll c[11][11];
	fori(i, 0, n)
	{
		fori(j, 0, n)
		{
			c[i][j] = 0;
			fori(k, 0, n)
			{
				c[i][j] += (x[i][k] * y[k][j]) % oo;
				c[i][j] %= oo;
			}
		}
	}
	fori(i, 0, n)
	{
		fori(j, 0, n)
		{
			a[i][j] = c[i][j];
		}
	}
}

void Poww(ll a[11][11], ll x)
{
	if(x <= 1 ) return;
	Poww(a, x / 2);
	tichmt(a, a);
	if(x % 2 == 1) tichmt(a,b);
}

void xl()
{
	cin >> n >> k;
	fori(i, 0, n)
	{
		fori(j, 0, n)
		{
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	Poww(a,k);
	ll res = 0;
	fori(i, 0, n)
	{
		res += a[i][0];
		res %= oo;
	}
	cout << res;
}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}