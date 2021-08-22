#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;

int n, k, s, res;
int a[30];

void Try (int j, ll sum){
    if(sum > s) return;
    for(int i = a[j - 1] + 1; i <= n - k + j; i ++){
        a[j] = i;
        if(j == k) {
            if(sum + i== s) res ++;
        }
        else Try(j + 1, sum + i);
    }
}

void xl(){
    if(((2* n - k + 1) * k) / 2 < s || ((k + 1) * k) / 2 > s ) {
        cout << 0;
        return;
    }
    res = 0;
    Try (1, 0);
    cout << res;
}

int main (){
    fastIO();
    // int T; T = 1;
    // cin >> T;
    while (cin >> n >> k >> s){
        if(n == 0 && s == 0 && k == 0) return 0;
        xl();
        cout << "\n";
    }
}