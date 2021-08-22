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

int n;
vector <int> L;

void xl (){
    cin >> n;
    L.clear();
    L.resize(n + 1);
    fori(i, 0, n + 1) L[i] = i;
    fori(i, 1, n + 1){
        for(int j = 1; j * j <= i; j ++){
            L[i] = min (L[i], L[i - j * j] + 1);
        }
    }
    cout << L[n];
}

int main(){
    fastIO();
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}