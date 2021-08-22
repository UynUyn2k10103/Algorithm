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
vector <int> a;
int res;
void xl(){
	cin >> n;
	a.resize(n);
	fori(i,0,n) cin >> a[i];
	res = a[0] + a[1];
	fori(i,0,n-1){
		fori(j,i+1,n){
			if(abs(res) > abs(a[i]+a[j])) res = a[i] + a[j];
		}
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