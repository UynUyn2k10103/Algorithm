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
ll k, sum;
vector <ll> a;

int BS(int l, int r, ll value){
    int mid, res = -1;
    while (l <= r){
        mid = (l + r) / 2;
        if(a[mid] >= value){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

void xl (){
    cin >> n >> k;
    a.clear();
    a.resize(n);
    cin >> a[0];
    fori(i, 1, n) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    if(a[n - 1] < k){
        cout << "NO";
        return;
    }
    int vt = BS(0, n - 1, k);
    if(a[vt] == k){
        cout << "YES";
        return;
    }
    int x;
    fori(i, vt, n){
        x = BS(0, i - 1, a[i] - k);
        if(x != -1 && a[i] - k == a[x]){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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