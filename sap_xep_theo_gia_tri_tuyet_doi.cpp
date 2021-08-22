#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;

struct so
{
	ll so;
	ll value;
	int index;
};


const int oo = 1e6 + 1;
so a[oo];
int n;
ll x;

bool cmp(so y, so z){
	if(y.value == z .value) return y.index < z.index;
	return y.value < z.value;
}

void xl(){
	cin >> n >> x;
	fori (i,0,n) {
		cin >> a[i].so;
		a[i].value = abs(x - a[i].so);
		a[i].index = i;
	}
	sort (a, a+n, cmp);
	fori(i,0,n) cout << a[i].so <<" ";
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while (T--){
		xl();
	}
}