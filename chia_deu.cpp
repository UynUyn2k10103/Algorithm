#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

vector <int> sum;
int n, k, x, tong, res;

void Try(int vt, int dem){
	if(vt == n - 1){
		if(dem == k) res ++;
		return;
	}
	fori(i, vt + 1, n){
		if(sum[i] - sum[vt] == tong){
			Try(i, dem + 1);
		}
	}
}

void xl (){
	cin >> n >> k; n ++; res = 0;
	sum.clear();
	sum.resize(n);
	sum[0] = 0;
	fori(i, 1, n){
		cin >> x;
		sum[i] = sum[i - 1] + x;
	}
	if(sum[n - 1] % k){
		cout << "0";
		return;
	}
	tong = sum[n - 1] / k;
	Try(0, 0);
	cout << res;
}

int main(){
	fastIO();
	int T; 
	T = 1;
	//cin >> T;
	//cin.ignore();
	while (T -- ){
		xl();
		cout << "\n";
	}
}