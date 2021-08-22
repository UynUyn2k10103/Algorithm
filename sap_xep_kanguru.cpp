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
vector <int> a;

int BS (int l, int r, int value){
	int mid, res = -1;
	while(l <= r){
		mid = (l + r)/2;
		if(a[mid] < value) l = mid + 1;
		else {
			res = mid;
			r = mid - 1;
		}
		return res;
	}
}
vector <int> vs;
int x, vt;

bool ok(int mid){
	vs.resize(n, 0);
	x = n - mid; vt = x;
	fori(i, 0, x){
		vt = BS(vt, n, a[i] * 2);
		if(vt == -1) return 0;
		if(!vs[vt]) vs[vt] = 1;
		else fori(j, vt, n){
			if(!vs[j]){
				vs[j] = 1;
				vt = j + 1;
				break;
			}
		}
	}
	return 1;
}

int chat(int l, int r){
	int mid, res = n;
	while(l <= r){
		mid = (l + r) / 2;
		if(ok(mid)) {
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	return res;
}

void xl (){
	cin >> n;
	a.clear();
	a.resize(n);
	fori(i, 0, n) cin >> a[i];
	sort(a.begin(), a.end());
	cout << chat(n/2 , n);
	
}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	//cin.ignore();
	while (T -- ){
		xl();
		cout << "\n";
	}
}