#include <cstdio>
#include <algorithm>
using namespace std;

int dp[10001], wine[10001], i, n, a;
int main(){
    scanf("%d", &n);
    scanf("%d", &wine[1]);
    
    dp[1] = wine[1];
    
    if(n > 1)
        scanf("%d", &wine[2]); dp[2] = wine[1] + wine[2];
    
    for(i=3; i<=n; i++){
        scanf("%d", &wine[i]);
        dp[i] = max(dp[i-3] + wine[i-1] + wine[i], max(dp[i-2] + wine[i], dp[i-1]));
    }
    printf("%d", dp[n]);
}
