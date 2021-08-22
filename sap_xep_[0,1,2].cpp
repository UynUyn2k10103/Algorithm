#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;

const int oo = 1e5 + 1;
ll a[3];
int x;
ll n;

void xl(){
	cin >> n;
	fori(i,0,n) {
		cin >> x;
		a[x] ++;
	}
	fori(i,0,3){
		fori(j,0,a[i]) cout << i <<" ";
		a[i] = 0;
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