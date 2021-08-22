#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

int n, k;
int a[1000];
ll res;

void Try(int vt, int dem){
    if(dem >= k){
        res ++; 
        //return;
    }
    for(int i = vt + 1; i < n; i ++){
        if(a[vt] <= a[i]) Try(i, dem + 1);
    }
}

void xl (){
    cin >> n >> k; res = 0;
    fori(i, 0, n) cin >> a[i];
    Try(0, 1);
    cout << res;
}

int main(){
    fastIO();
    int T; 
    T = 1;
    //cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}