#include<bits/stdc++.h>

typedef long long int ll;

ll N = 1000000007;

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll arr[n], sum=0, res=0, ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }

    for(int i=0;i<=1<<n;i++){
        res=0;
        for(int j=0;j<n;j++){
            if(i>>j&1)
                res += arr[j];
        }
        if(res<=(sum/2))
            ans = max(ans, res);
    }

    cout<<sum - 2*ans<<endl;

    return 0;
}
