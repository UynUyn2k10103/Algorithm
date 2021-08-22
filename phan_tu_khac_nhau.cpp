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

int n;
vector <ll> a;
ll x;
bool check;

void xl(){
	cin >> n;
	a.resize(n);
	check = 1;
	fori(i,0,n) cin >> a[i];
	fori(i,0,n - 1){
		cin >> x;
		if (x != a[i] && check){
			cout << i + 1;
			check = 0;
		}
	}
	a.clear();
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