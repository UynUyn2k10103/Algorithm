#include<bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
#define endl '\n'
using namespace std;

ll t[100];
int n;
ll s, ans;
bool ok = 1;

bool cmp(ll a, ll b){
	return a > b;
}

void Try(int k, ll sum, ll res){
	forr(i,2,0){
		if(sum > s || !ok) return;
		if(sum == s){
			ans = min (res, ans);
			ok = 0;
			return;
		}
		if (k == n && s < sum) return;
		if(k < n) Try(k + 1, sum + t[k] * i, res + i);
	
	}
}

void xl(){
	ans = 1e18; ok = 1;
	cin >> n >> s;
	fori(i, 0, n) cin >> t[i];
	sort(t, t + n, cmp);
	Try(0, 0, 0);
	if(ok) cout << "-1";
	else cout << ans;
}

int main(){
	fastIO();
	int T = 1;
	cin >> T;
	while(T--){
		xl();
		cout << endl;
	}
}