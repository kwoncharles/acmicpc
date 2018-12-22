#include <cstdio>
#include <algorithm>

int a[101];
int dp[101];
int n,k;

int main(){
    scanf("%d%d", &n,&k);

    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    dp[0] = 1;
    for(int i=0; i<n; i++){
        int j=0;
        for(j=1; j<=k; j++){
            if(j-a[i]>=0)
                dp[j] += dp[j-a[i]];
        }
    }

    printf("%d", dp[k]);
}
