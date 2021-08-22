#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
ll f[1005];
ll a[1005];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    ll res;
    while(t--){
        cin>>n;
        n++;
        res=0;
        fori(i,1,n) {
            cin>>a[i];
            f[i]=a[i];
        }
        fori(i,1,n)
        {
            fori(j,1,i) if(a[i]>a[j]) f[i]=max(f[i],f[j]+a[i]);
            res=max(res,f[i]);
        }
        cout<<res<<"\n";
    }
}