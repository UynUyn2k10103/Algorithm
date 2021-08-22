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

vector < vector <ll> > ans;
vector <ll> res;
ll sum;

void Prepare(){
	res.resize(1, 0); ans.pb(res);
	res.clear(); res.resize(10, 1);
	res.pb(10); ans.pb(res);
	fori(i, 2, 101){
		sum = 0;
		fori(j, 0, 10){
			res[j] = 0;
			fori(k, 0, j + 1){
				res[j] += ans[i - 1][k];
				res[j] %= mod;
			}
			sum += res[j];
			sum %= mod;
			 
		}
		res[10] = sum;
		ans.pb(res);
	}
}

int n;

void xl (){
	cin >> n;
	//fori(i, 0, 11) cout << ans[2][i] << " ";
	cout << ans[n][10];
}

int main(){
	fastIO();
	int T; 
	Prepare();
	//T = 1;
	cin >> T;
	//cin.ignore();
	while (T -- ){
		xl();
		cout << "\n";
	}
}