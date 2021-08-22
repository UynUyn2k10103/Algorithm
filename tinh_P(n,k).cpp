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

ll n, k,res ;
const ll oo = 1e9 + 7;

void xl(){
	cin >> n >> k;
	if(k > n){
		cout << "0";
		return;
	}
	if(k == 0){
		cout << "1";
		return;
	}
	res = 1;
	fori(i,n - k + 1, n + 1){
		res *= i;
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