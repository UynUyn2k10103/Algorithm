#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;

int x;

bool test (int k){
	int f[6] = {0};
	while(k){
		x = k % 10;
		if (x > 5) return 0;
		f[x] ++;
		if (f[x] > 1) return 0;
		k /= 10;
	}
	return 1;
}

const int oo = 1e5 + 1;
int cb[oo];
int res;

void xl (){
	res = 0;
	fori(i,0,oo){
		if(test(i)) res ++;
		cb[i] = res;
	}
}

int l, r;

void solution(){
	cin >> l >> r;
	//fori(i,l, r + 1) cout << cb[i] << " ";
	if(l == 0) cout << cb[r];
	else cout << cb[r] - cb[l - 1];
}
int main(){
	fastIO();
	xl();
	int T; 
	//T = 1;
	cin >> T;
	while (T -- ){
		solution();
		cout << "\n";
	}
}