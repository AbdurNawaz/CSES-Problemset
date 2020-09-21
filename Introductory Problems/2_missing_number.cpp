#include<bits/stdc++.h>
 
typedef long long int ll;
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, x;
    cin>>n;
    bool arr[n+1];
    memset(arr, 0, sizeof(arr));
    for(int i=0;i<n-1;i++){
        cin>>x;
        arr[x] = 1;
    }
    for(int i=1;i<=n;i++){
        if(!arr[i]){
            cout<<i;
            break;
        }
    }
 
    return 0;
}