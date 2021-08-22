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

int n;
char x;
vector <int> a;

void xl (){
	cin >> n; a.clear();
	int dem[4] = {0};
	fori(i, 0, n){
		cin >> x;
		if(x == 'T') a.pb(2);
		else if(x == 'X') a.pb(1);
		else a.pb(3);
		dem[a[i]] ++;
	}
	int res = 0;
	bool ok;
	int vtX = dem[1], vtT = dem[1] + dem[2];
	fori(i, 0, vtT){
		if(i < vtX && a[i] != 1){
			ok = 1;
			if(a[i] == 2){
				fori(j, vtX, vtT){
					if(a[j] == 1) {
						swap(a[i], a[j]);
						ok = 0;
					}
				}
				if(ok) fori(j, vtT, n){
					if(a[j] == 1) swap(a[i], a[j]);
				}
			}
			if(a[i] == 3) {
				fori(j, vtT, n){
					if(a[j] == 1) {
						swap(a[i], a[j]);
						ok = 0;
					}
				}
				if(ok) fori(j, vtX, vtT){
					if(a[j] == 1) swap(a[i], a[j]);
				}
			}
			res ++;
			continue;
		}
		if(i < vtT && a[i] == 3){
			fori(j, vtT, n){
				if(a[j] == 2) {
					swap(a[i], a[j]);
				}
			}
			res ++;
		}
	}
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
		//cout << "\n";
	}
}