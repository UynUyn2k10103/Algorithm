#include<bits/stdc++.h>
#define fori(i,a,b) for(long long i = a; i < b; i++)
#define forr(i,a,b) for(long long i = a-1;i >= b; i--)
#define ll long long
using namespace std;

const int oo = 1e6 + 1;
bool a[oo];
int n, x, y, k;

void xl(){
	cin >> n;
	cin >> x;
	y = x;
	a[x] = 1;
	fori (i,1,n){
		cin >> k;
		a[k] = 1;
		x = min (k, x);
		y = max(k, y);
	}
	a[x] = 0; a[y] = 0;
	int dem = 0;
	fori (i, x + 1, y){
		// cout << i <<" " << a[i] <<"\n";
		if(!a[i]) dem ++;
		else a[i] = 0;
	}
	cout << dem;

}

int main(){
	int T;
	cin >> T;
	while (T--){
		xl();
		cout << "\n";
	}
}