#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

int n;
ll x, res, ans;

void xl(){
	cin >> n;
	cin >> res;
	ans = res;
	fori(i,1,n){
		cin >> x;
		if(res + x >= x) res += x;
		else res = x;
		ans = max (res, ans);
	}
	
	cout << ans;
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