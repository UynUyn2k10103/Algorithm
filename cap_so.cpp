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

int n, ans;
vector <pair <int, int> > a;
vector <int> res;

bool cmp(pair <int, int> x, pair <int, int> y){
    return x.F < y.F;
}

void xl(){
	cin >> n;
	a.resize (n);
	res.resize(n, 1);
	fori(i,0,n){
		cin >> a[i].F >> a[i].S;
	}
	sort (a.begin(), a.end(), cmp);
	ans = 1;
	fori(i,1,n){
		fori(j,0,i){
			if(a[j].S < a[i].F) res[i] = max (res[i], res[j]+1);
		}
		ans = max(ans,res[i]);
	}
	cout << ans;
	a.clear();
	res.clear();
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