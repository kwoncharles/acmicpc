//
//  2579.cpp
//  c++
//
//  Created by Kwoncheol on 21/07/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

#include <cstdio>
#define max(a,b) (a>b)?a:b

int n,i=1;
int a[301],dp[301];

int main(){
    for(scanf("%d", &n); i<=n; i++)
        scanf("%d", &a[i]);
    
    dp[0] = 0;
    dp[1] = a[1];
    dp[2] = a[1] + a[2];
    
    for(i=3; i<=n; i++)
        dp[i] = max(dp[i-3]+a[i-1]+a[i], dp[i-2]+a[i]);

    printf("%d",dp[i-1]);
}
