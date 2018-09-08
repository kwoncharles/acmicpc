#include <cstdio>
#include <algorithm>
using namespace std;

int i,n,arr[100001], dp[100001], max_s=-1001;

int main() {
    for(scanf("%d", &n), i=1; i<=n; i++){
        scanf("%d", &arr[i]);

        if(dp[i-1] + arr[i] > arr[i])
            dp[i] = dp[i-1] + arr[i];
        else
            dp[i] = arr[i];
        
        if(dp[i] > max_s)
            max_s = dp[i];
    }
    printf("%d", max_s);
}

//short coding
/*
a,b;
main(t){
    for(a=-gets(&a);~scanf("%d",&t);a=a>b?a:b)
        b=b>0?b+t:t;
    printf("%d",a);
}
*/
