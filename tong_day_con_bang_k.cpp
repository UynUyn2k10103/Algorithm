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
ll a[100], k;
bool dd[100];
bool check = 1;
vector < ll > ans;
vector <vector <ll> > res;

void Try(int vt, ll sum){
	if (sum > k) return;
	fori(i,vt ,n){
		if(dd[i] == 0){
			if (sum + a[i] < k) {
				dd [i] = 1;
				Try(i, sum + a[i]);
				dd [i] = 0;
			}
			else if(sum + a[i] == k){
				ans.clear();
				fori (j,0,i){
					if (dd[j]) ans.pb(a[j]);
				}
				ans.pb(a[i]);
				res.pb(ans);
				
				check = 0;
			}
		}
	}
}

void xl(){
	check = 1;
	cin >> n >> k;
	fori(i,0,n) cin >> a[i];
	sort (a, a + n);
	Try (0,0);
	forr(i, res.size(), 0){
		fori(j, 0, res[i].size()) cout << res[i][j] << " ";
		cout << "\n";
	}
	cout << res.size();
	if (check) cout << "-1";

}
int main(){
	fastIO();
	int T; 
	T = 1;
	//cin >> T;
	while (T -- ){
		xl();
		//cout << "\n";
	}
}