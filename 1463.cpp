//
//  1463.cpp
//  c++
//
//  Created by Kwoncheol on 21/07/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

/*
 dp[i] = dp[i-1] + 1
 dp[i] = dp[i/2] + 1
 dp[i] = dp[i/3] + 1
 */

#include <cstdio>

int n,dp[1000001];
int main(){
    scanf("%d",&n);
    dp[1] = 0;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + 1;
        if(i%2 == 0 && dp[i] > dp[i/2] + 1)
            dp[i] = dp[i/2] + 1;
        if(i%3 == 0 && dp[i] > dp[i/3] + 1)
            dp[i] = dp[i/3] + 1;
    }
    printf("%d", dp[n]);
}
// Ver2
/*
int n,cnt;
int dp[1000001];

int dyn(int num){
    dp[1] = 0;
    int n2=10000000,n3=10000000;
    
    if(num == 1 || dp[num] != 0)
        return dp[num];
    else if(num%2 == 0)
        n2= min(dyn(num/2) + 1, dyn(num-1) + 1);
    else if(num%3 == 0)
        n3= min(dyn(num/3) + 1, dyn(num-1) + 1);
    else
        n2= dyn(num-1) + 1;
    
    dp[num] = min(n2,n3);
    return dp[num];

}
int main(){
    scanf("%d", &n);
    printf("%d", dyn(n));
}
*/
