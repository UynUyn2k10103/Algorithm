#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;

const int oo = 1e5 + 1;
bool a[10];
string s;
ll n;

void xl(){
	cin >> n;
	fori(i,0,n) {
		cin >> s;
		fori (i, 0, s.size()){
			a[s[i] - '0'] = 1;
		}
	}
	fori(i,0,10){
		if(a[i]) cout << i << " ";
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