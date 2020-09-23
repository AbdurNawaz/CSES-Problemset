#include<bits/stdc++.h>

typedef long long int ll;

ll N = 1000000007;

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
    ll res = 1;
    while(n--){
        res = (res*2)%N;
    }

    cout<<res%N<<endl;
    return 0;
}
