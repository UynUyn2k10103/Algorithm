#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;

const int oo = 1e5 + 1;
int a[oo];
int k, n, x;

int up (int l, int r, int v){
	int mid;
	int res = n;
	while (l <= r){
		mid = (l + r) / 2;
		if (a[mid] > v) {
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	return res;
}

int lowe (int l, int r, int v){
	int mid;
	int res = l - 1;
	while (l <= r){
		mid = (l + r) / 2;
		if (a[mid] < v) {
			res = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	return res + 1;
}

void xl(){
	cin >> n >> k;
	fori(i,0,n) {
		cin >> a[i];
	}
	int res = 0;
	sort (a, a + n);
	fori (i,0,n){
		if (a[i] > k) break;
		x = k - a[i];
		res = res + up(i + 1, n - 1, x) - lowe(i + 1, n - 1, x);
	}
	cout << res << "\n";
}

int main(){
	int T;
	cin >> T;
	while (T--){
		xl();
	}
}