// By Uyen B19DCCN709
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

ll a[100];

void prepare(){
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    fori(i, 4, 55){
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
}

int n;

void xl (){
    cin >> n;
    cout << a[n];
}

int main(){
    fastIO();
    prepare();
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}