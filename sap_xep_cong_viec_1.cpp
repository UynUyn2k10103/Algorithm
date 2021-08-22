#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
struct cviec{
    int bd,kt;
};
cviec v[1005];
bool cmp(cviec a,cviec b){
    return a.kt<b.kt;
}
int n,ans=0;
bool check[2000];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        ans=1;
        fori(i,0,n) cin>>v[i].bd;
        fori(i,0,n) cin>>v[i].kt;
        sort(v,v+n,cmp);
        //fori(i,0,n) cout<<v[i].bd<<" "<<v[i].kt<<"\n";
        int i=0;
        fori(j,1,n){
            if(v[j].bd>=v[i].kt){
                ans++;
                i=j;
            }
        }
        cout<<ans<<"\n";
    }
}