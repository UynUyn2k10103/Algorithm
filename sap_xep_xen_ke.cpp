#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;

const int oo = 1e6 + 1;
ll a[oo];
int n;

void xl(){
	cin >> n;
	fori (i,0,n) cin >> a[i];
	sort (a, a+n);
	int l = 0, r = n - 1;
	while (l < r){
		cout << a[r--] << " " << a[l++] <<" ";
	}
	if (n % 2) cout << a[l];
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while (T--){
		xl();
	}
}