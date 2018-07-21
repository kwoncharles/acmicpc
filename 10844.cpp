//
//  10844.cpp
//  c++
//
//  Created by Kwoncheol on 21/07/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

#include <cstdio>
int n,sum;
int dp[101][10];

int main(){
    scanf("%d",&n);
    
    for(int i=0; i<10; i++)
        dp[1][i] = 1;
    
    for(int i=2; i<=n; i++){
        for(int j=0; j<=9; j++){
            if(j>0)
                dp[i][j] += dp[i-1][j-1];
            if(j<9)
                dp[i][j] += dp[i-1][j+1];
            dp[i][j] %= 1000000000;
        }
    }
    for(int i=1; i<10; i++){
        sum += dp[n][i];
        sum %= 1000000000;
    }
    printf("%d",sum);
}

