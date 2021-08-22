#include<bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
//#define endl '\n'
using namespace std;

int n, x;

void xl(){
	cin >> n;
	x = n / 7;
	n %= 7;
	while(n % 4 != 0 && n <= 28){
		n += 7;
		x--;
	}
	if(n % 4 != 0 || x < 0){
		cout << "-1";
		return;
	}
	n /= 4;
	fori(i,0,n) cout << "4";
	fori(i,0,x) cout << "7";
}

int main(){
	fastIO();
	int T = 1;
	cin >> T;
	while(T--){
		xl();
		cout << "\n";
	}
}