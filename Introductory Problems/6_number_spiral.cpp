#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll r, c;
        cin>>r>>c;

        ll mx = max(r, c);

        if(mx==r){
            if(r%2==0){
                ll curr = r*r;
                cout<<curr-c+1<<endl;
            }
            else{
                ll curr = (r-1)*(r-1);
                cout<<curr+c<<endl;
            }
        }
        else{
            if(c%2==0){
                ll curr = (c-1)*(c-1);
                cout<<curr+r<<endl;
            }
            else{
                ll curr = c*c;
                cout<<curr-r+1<<endl;
            }
        }
    }

    return 0;
}
