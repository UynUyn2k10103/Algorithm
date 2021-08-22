#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;

const int oo = 1e6 + 1;
ll a[oo], k;
int n;

// int BS(int l, int r, int value){
// 	int mid;
// 	while (l <= r){
// 		mid = (l + r) / 2;
// 		if (a[mid] == value) return mid + 1;
// 		else if (a[mid] < value) l = mid + 1;
// 		else r = mid - 1;
// 	}
// 	return 0;
// }
int main(){
	int T;
	cin >> T;
	bool res;
	while (T--){
		cin >> n >> k;
		res = 1;
		fori (i, 0, n) {
			cin >> a[i];
			if (a[i] == k && res) {
				cout << i + 1;
				res = 0;
			}
		}
		if (res) cout << "NO";
		cout <<"\n";
	}
}