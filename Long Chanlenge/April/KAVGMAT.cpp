#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int testcase = 1; 
    cin>>testcase;
    for(int p = 0;p < testcase; p++){
        int nos, m, k; 
        cin>>nos>>m>>k;
        int arr[nos][m];
        for(int q= 0; q < nos; q++){
            for(int j  =0; j < m; j++)
            cin>>arr[q][j];
        }

        ll S[nos+1][m+1] = {};
        for(int i = 1; i <= nos; i++){
            for(int j = 1; j <= m; j++){
                S[i][j] = S[i-1][j] + S[i][j-1] + arr[i-1][j-1] - S[i-1][j-1];
            }
        }

        ll answer = 0;
        for(int r = 1; r <= nos; r++){
            for(int c1 = 1; c1 <= m; c1++){
                int l = 1, q = min(nos-r+1, m-c1+1), result = -1, mx = q;
                while(l <= q){
                    int md = (l+q)/2;
                    int r2 = r + md -1, c2 = c1 + md - 1;
                    ll cur = S[r2][c2] - S[r-1][c2] - S[r2][c1-1] + S[r-1][c1-1];
                    ll md2 = (md)*(md);
                    if(cur >= k*md2)q = md - 1, result = md;
                    else 
                         l = md+1;
                }
                if(result != -1)
                     answer += mx - result + 1;
            }
        }

        cout<<answer<<endl;
    }    
    return 0;
}