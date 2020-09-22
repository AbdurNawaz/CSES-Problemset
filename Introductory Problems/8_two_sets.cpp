#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;

    ll sum = n*(n+1)/2;

    if(sum%2==0){
        cout<<"YES"<<endl;
        vector<int> v1, v2;
        sum = sum/2;
        for(int i=n;i>=1;i--){
            if(sum-i>=0){
                v1.push_back(i);
                sum -= i;
            }
            else{
                v2.push_back(i);
            }
        }
        cout<<v1.size()<<endl;
        for(int i=v1.size()-1;i>=0;i--)
            cout<<v1[i]<<" ";
        cout<<endl<<v2.size()<<endl;
        for(int i=v2.size()-1;i>=0;i--)
            cout<<v2[i]<<" ";

    }
    else{
        cout<<"NO";
    }

    return 0;
}
