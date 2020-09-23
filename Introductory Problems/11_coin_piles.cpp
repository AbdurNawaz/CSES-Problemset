#include<bits/stdc++.h>

typedef long long int ll;

ll N = 1000000007;

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll x, y;
        cin>>x>>y;
        if((x+y)%3 != 0 || max(x,y)-min(x,y) > min(x, y))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
