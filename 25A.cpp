#include<bits/stdc++.h>
#define LL long long int
#define REP(i,n) for(int i=0;i<n;++i)
#define REPP(i,a,b) for(int i=a;i<b;++i)
#define TC int t;scanf("%d",&t);while (t-->0)
#define INP(x) scanf("%d",&x)
#define OUT(x) printf("%d\n",x)
#define INPLL(x) scanf("%lld",&x)
#define OUTLL(x) printf("%lld\n",x)
#define INPS(x) scanf("%s",x)
#define MEM(a,b) memset(a,b,sizeof(a))
#define MP make_pair
#define PB push_back
#define PII pair<int,int>
#define PLL pair<long long,long long>
#define VPII vector<pair<int,int >
#define F first
#define S second
#define MOD 1000000007
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    LL n,ans_e,ans_o,d,e=0,o=0;
    INPLL(n);
    REP(i,n) {
        INPLL(d);
        if(d&1) {
            o++;
            ans_o=i+1; 
        }
        else{
            e++;
            ans_e=i+1;
        }
    }
    OUTLL(o>1?ans_e:ans_o);
    
    return 0;
}