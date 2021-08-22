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

int n, x;
int res1, res2;
bool check;

void xl(){
	cin >> n;
	cin >> res1;
	check = 1;
	fori(i,1,n){
		cin >> x;
		if(res1 == x) continue;
		if (res1 > x){
			res2 = res1;
			res1 = x;
			continue;
		}
		if(check){
			check = 0;
			res2 = x;
		}
		else if(res2 > x) res2 = x;
	}
	if(check || res1 == res2) cout << "-1";
	else cout << res1 << " " << res2;
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