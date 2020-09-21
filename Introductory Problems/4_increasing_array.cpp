#include<bits/stdc++.h>
 
typedef long long int ll;
 
using namespace std;
 
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
 
    ll res = 0;
 
    for(int i=1;i<n;i++){
        ll diff = arr[i] - arr[i-1];
        if(diff<0){
            res += abs(diff);
            arr[i] += abs(diff);
        }
    }
 
    cout<<res;
    return 0;
}