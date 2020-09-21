#include<bits/stdc++.h>
 
typedef long long int ll;
 
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    while(n>0){
        cout<<n<<" ";
        if(n==1)
            break;
        if(n%2==0)
            n /= 2;
        else
            n = 3*n + 1;
    }
 
    return 0;
}