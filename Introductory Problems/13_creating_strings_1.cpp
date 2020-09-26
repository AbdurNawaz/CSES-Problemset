#include<bits/stdc++.h>

typedef long long int ll;

ll N = 1000000007;

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    vector<string> res;

    do{
        res.push_back(s);
    }while(next_permutation(s.begin(), s.end()));

    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<endl;
    return 0;
}
