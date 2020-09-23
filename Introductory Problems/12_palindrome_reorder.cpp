#include<bits/stdc++.h>

typedef long long int ll;

ll N = 1000000007;

using namespace std;

string solve(string s){
    ll freqs[26];
    memset(freqs, 0, sizeof(freqs));

    for(int i=0;i<s.length();i++)
        freqs[s[i]-'A']++;

    int cnt = 0;
    string odd = "";
    for(int i=0;i<26;i++){
        if(freqs[i]%2!=0){
            cnt++;
            odd += i+'A';
        }
        if(cnt>1)
            return "NO SOLUTION";
    }

    string res1 = "";
    string res2 = "";

    for(int i=0;i<26;i++){
        string res(freqs[i]/2, i+'A');
        res1 += res;
        res2 = res + res2;
    }

    return res1 + odd + res2;


}

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    cout<<solve(s)<<endl;
    return 0;
}
