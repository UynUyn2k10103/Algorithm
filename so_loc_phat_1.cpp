#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

int k,n;
int a[30];

// ll luy_thua(ll mu){
// 	if (mu == 0) return 1;
// 	ll res = luy_thua(mu / 2);
// 	res = res * res;
// 	if(mu % 2) return res * 2;
// 	return res;
// }

void Try(int i)
{
	fori (j,0,2){
		a[i] = j;
		if (i == k) {
			fori(i,1,k + 1) {
				if (a[i]) cout << "6";
				else cout << "8";
			}
			cout <<" ";
		}
		else Try (i + 1);
	}
}

void xl(){
	cin >> n;
	k = n;
	//cout << luy_thua(n+1) - 2 << "\n";
	while (n -- ){
		Try(1);
		k --;
	}
}

int main()
{
	int T;
	cin >> T;
	while (T--){
		xl();
		cout << "\n";
	}
}