#include<bits/stdc++.h>
#define fori(i,a,b) for(long long i = a; i < b; i++)
#define forr(i,a,b) for(long long i = a-1;i >= b; i--)
#define ll long long
using namespace std;

const int oo = 1e6 + 1;
int a[oo];
int n;

void xl(){
	cin >> n;
	fori(i,0,n) cin >> a[i];
	sort (a, a + n);
	fori (i,0,n) cout << a[i] << " ";
}

int main(){
	int T;
	cin >> T;
	while (T--){
		xl();
		cout << "\n";
	}
}