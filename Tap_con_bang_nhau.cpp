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
ll a[1000], k;
bool check = 0;

void Try(int vt, ll sum){
	fori(i,vt ,n){
		if (check == 1 || sum + a[i] > k / 2) return;
		if (sum + a[i] < k / 2) Try(i, sum + a[i]);
		else if(sum + a[i] == k / 2) {
			check = 1;
			return;
		}
	}
}

void xl(){
	check = 0;
	cin >> n;
	k = 0;
	fori(i,0,n) {
		cin >> a[i];
		k += a[i];
	}
	if (k % 2 ) {
		cout << "NO";
		return;
	}
	sort (a, a + n);
	Try (0,0);
	if (check) cout << "YES";
	else cout << "NO";
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