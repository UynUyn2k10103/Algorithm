#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;

const int oo = 1e5 + 1;
int a[oo];
int k, n;

void xl(){
	cin >> n >> k;
	fori(i,0,n) {
		cin >> a[i];
	}
	sort(a, a+n);
	int r = n - 1;
	while (k--){
		cout << a[r--] <<" ";
	}
	cout <<"\n";
}

int main(){
	int T;
	cin >> T;
	while (T--){
		xl();
	}
}