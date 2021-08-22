#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

bool stop;
int k,n;
int a[30];
long long res=1e18;

void Try(int i)
{
	fori (j,0,2){
		a[i] = j;
		if (i == k) {
			ll s = 0;
			fori(i,1,k + 1) s = s * 10 + a[i];
			s *= 9;
			if(s % n == 0&& s >= n){
				res = min (res, s);
				stop = 1;
			}
		}
		else Try (i + 1);
	}
}

void xl(){
	cin >> n;
	k = 1;
	stop = 0;
	res = 1e18;
	while (!stop){
		Try(1);
		k++;
	}
	cout << res <<"\n";
}
int main()
{
	int T;
	cin >> T;
	while (T--){
		xl();
	}
	return 0;
}