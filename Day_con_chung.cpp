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

int n1, n2, n3;
vector <ll> a;
vector <ll> res;

void xl (){
    map <ll, int> m1, m2, m3;
    cin >> n1 >> n2 >> n3;
    res.clear();
    a.clear(); a.resize(n1);
    fori(i, 0, n1){
        cin >> a[i];
        m1[a[i]] ++;
    }
    a.clear(); a.resize(n2);
    fori(i, 0, n2){
        cin >> a[i];
        m2[a[i]] ++;
    }
    a.clear(); a.resize(n3);
    fori(i, 0, n3){
        cin >> a[i];
        m3[a[i]]++;
    }
    int tmp;
    fori(i, 0, n3){
        tmp = min(m1[a[i]], min(m2[a[i]], m3[a[i]]));
        fori(j, 0, tmp) res.pb(a[i]);
        m3[a[i]] = 0;
    }
    if(res.size() == 0) {
        cout << "NO";
        return;
    }
    sort(res.begin(), res.end());
    fori(i, 0, res.size()) cout << res[i] << " ";

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