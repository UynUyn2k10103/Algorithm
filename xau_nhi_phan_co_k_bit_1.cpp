#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

int n, k;
bool a[30];

void print(){
	fori(i,0,n) cout << a[i];
	cout << "\n";
}

bool check(){
	int dem = 0;
	fori(i,0,n) if (a[i]) dem ++;
	return dem == k;
}

void Try(int i){
	fori(j,0,2){
		a[i] = j;
		if(i == n - 1){
			if(check()) print();
		}
		else Try (i + 1);
	}
}
void xl(){
	cin >> n >> k;
	Try(0);
}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	while (T -- ){
		xl();
		//cout << "\n";
	}
}