#include<bits/stdc++.h>

typedef long long int ll;

ll N = 1000000007;

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
    ll res = 0;
    for(int i=5;n/i>0;i*=5)
        res += n/i;

    cout<<res<<endl;

    return 0;
}
