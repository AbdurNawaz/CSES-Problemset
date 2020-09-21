#include<bits/stdc++.h>
 
typedef long long int ll;
 
using namespace std;
 
int main(){
    string s;
    cin>>s;
    ll n = s.length();
    ll res = 1, max_res=1;
    bool flag = false;
    char c = s[0];
    for(int i=1;i<n;i++){
        if(s[i]==c){
            res++;
        }
        else{
            c = s[i];
            res = 1;
        }
 
        max_res = max(res, max_res);
    }
 
    cout<<max_res;
    return 0;
}