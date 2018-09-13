#include <cstdio>

long long t,i,j,k;
int main(){
    int n;
    for(scanf("%d", &n);~scanf("%d",&n);printf("%lld\n",i)){
        for(i=j=k=1;--n>2;i=k+j,k=j,j=t) t=i;
    }
}

// First approach

//#include <cstdio>
//
//long long dp[101] = {0,1,1,1,2,2}, n, t, i, max_i=6;
//
//int main(){
//    for(scanf("%d", &n); i<n; i++){
//        scanf("%d", &t);
//        for(int j=max_i; j<=t; j++) {
//            dp[j] = dp[j-1] + dp[j-5];
//        }
//        if(t > max_i)
//            max_i = t;
//        printf("%lld\n", dp[t]);
//    }
//}
//

// Second approach

//#include <cstdio>
//
//long long dp[101] = {0,1,1,1,2,2,};
//int main(){
//    int n,t;
//    for(int i=6; i<=100; i++)
//        dp[i] = dp[i-1] + dp[i-5];
//    scanf("%d", &n);
//    while(n--){
//        scanf("%d", &t);
//        printf("%lld\n", dp[t]);
//    }
//}
