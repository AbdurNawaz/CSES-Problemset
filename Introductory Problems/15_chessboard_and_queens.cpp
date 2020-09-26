#include<bits/stdc++.h>

typedef long long int ll;

ll N = 1000000007;

using namespace std;

string s[8];
bool b[15];


int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    for(int i=0;i<8;i++){
        cin>>s[i];
    }

    int p[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    ll ans = 0;
    do{ 
        bool res = 1;
        for(int i=0;i<8;i++){
            res &= s[i][p[i]]=='.';
        }  
        if(res){
            memset(b, 0, sizeof(b));
            for(int i=0;i<8;i++){
                if(b[i+p[i]]){
                    res = 0;
                    break;
                }
                b[i+p[i]] = 1;
            }
        }
        if(res){
            memset(b, 0, sizeof(b));
            for(int i=0;i<8;i++){
                if(b[i+7-p[i]]){
                    res = 0;
                    break;
                }
                b[i+7-p[i]] = 1;
            }
        }

        ans += res;

    }while(next_permutation(p, p+8));

    cout<<ans<<endl;
    return 0;
}
