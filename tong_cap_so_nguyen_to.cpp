#include<bits/stdc++.h>
#define fori(i,a,b) for(long long i = a; i < b; i++)
#define forr(i,a,b) for(long long i = a-1;i >= b; i--)
#define ll long long
using namespace std;

const int oo = 1e6 + 1;
bool a[oo];

void sang(){
	a[0] = a[1] = 1;
	fori (i, 2, oo){
		if (a[i]) continue;
		for(ll j = i * i; j < oo; j += i) a[j] = 1;
	}
}

int up (int l, int r, int v){
	int mid;
	int res = -1;
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

int n, x;

void xl(){
	cin >> n;
	for(int i = 2; i * 2 <= n ; i++){
		if(!a[i] && !a[n - i]){
			cout << i << " " << n - i;
			return;
		}
	}
	cout << "-1";
}

int main(){
	int T;
	cin >> T;
	sang ();
	while (T--){
		xl();
		cout << "\n";
	}
}