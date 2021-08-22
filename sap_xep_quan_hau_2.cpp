#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;

int n, x[20], dem;
bool Cols[100], Xuoi[100], Nguoc[100];
int ans;
int a[10][10];
void sapxep_hau(int i, int sum){
	fori(j, 1, n + 1){
		if(!Cols[j] && !Xuoi[i - j + n] && !Nguoc[i + j -1]){
			Cols[j] = 1; Xuoi[i - j + n] = 1; Nguoc[i + j - 1] = 1;
			if (i == n) {
                ans = max(ans, sum + a[i][j]);
            }
			else sapxep_hau(i + 1, sum + a[i][j] );
			Cols[j] = 0; Xuoi[i - j + n] = 0; Nguoc[i + j - 1] = 0;
		}
	}
}

void xl(){
	n = 8;
    fori(i, 1, 9){
        fori(j, 1, 9) cin >> a[i][j];
    }
    ans = 0;
	sapxep_hau(1, 0);
	cout << ans;

}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}