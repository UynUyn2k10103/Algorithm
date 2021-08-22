#include<bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
//#define endl '\n'
using namespace std;

int n;
bool a[100];

bool check(){
	fori(i,0,n/2 + 1){
		if(a[i] != a[n - i - 1]) return 0;
	}
	return 1;
}

void Try(int k){
	fori(i,0,2){
		a[k] = i;
		if(k == n - 1) {
			if(check()){
				fori(j,0,n) cout << a[j] << " ";
				cout << "\n";
			}
		}
		else Try(k + 1);
	}
}

void xl(){
	cin >> n;
	Try (0);
}

int main(){
	fastIO();
	int T = 1;
	//cin >> T;
	while(T--){
		xl();
		//cout << "\n";
	}
}