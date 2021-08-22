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

const int oo = 1e6 + 1;
ll a[oo], X;
int n;

int BS(int l, int r, ll value){
	int mid;
	while (l <= r){
		mid = (l + r) / 2;
		if(a[mid] == value) return 1;
		else if (a[mid] > value) r = mid - 1;
		else l = mid + 1;
	}
	return -1;
}

void xl(){
	cin >> n >> X;
	fori(i,0,n) cin >> a[i];
	cout << BS(0, n, X);
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