#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    for(int k=1;k<=n;k++){
        ll k2 = k*k;

        ll c = k2*(k2-1)/2 - 4*(k-1)*(k-2);

        cout<<c<<endl;
    }


    return 0;
}
