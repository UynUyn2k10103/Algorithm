#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
int a[1005];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; t = 1;
    //cin>>t;
    int n,res;
    int dem=0;
    while(t--){
        cin>>n;
        fori(i,0,n) cin>>a[i];
        res=0;
        int f[1005]={0};
        fori(i,0,n){
            fori(j,0,i) if(a[j]<a[i]) f[i]=max(f[i],f[j]);
            f[i]++;
            res=max(res,f[i]);
        }
        cout << res;
        //cout<<n-res<<"\n";
    }
}