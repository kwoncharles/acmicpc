//
//  1149_dp_rgb.cpp
//  c++
//
//  Created by Kwoncheol on 28/04/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

// 1149_ RGB거리 문제
//

#include <cstdio>
#include <iostream>

using namespace std;

int min_three(int a, int b, int c){
    int temp;
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    
    if(b>c){
        temp = b;
        b = c;
        c = temp;
    }
    
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    
    return a;
}

int main(){
    int n;
    int arr[1001][3]={NULL};
    int cost[1001][3]={NULL};
    
    scanf("%d%d%d%d",&n,&arr[1][0],&arr[1][1],&arr[1][2]);
    
    cost[1][0] = arr[1][0]; cost[1][1] = arr[1][1]; cost[1][2] = arr[1][2];
    
    for(int t=2;t<=n;t++){
        scanf("%d %d %d", &arr[t][0], &arr[t][1], &arr[t][2]);
        cost[t][0] = min(cost[t-1][1],cost[t-1][2]) + arr[t][0];
        cost[t][1] = min(cost[t-1][0],cost[t-1][2]) + arr[t][1];
        cost[t][2] = min(cost[t-1][0],cost[t-1][1]) + arr[t][2];
    }
    
    printf("%d", min_three(cost[n][0],cost[n][1],cost[n][2]));
    
    return 0;
}



//모범답안
/*
int main(){
    int N,a,b,c,x,y,z,i,r;
    scanf("%d%d%d%d",&N,&a,&b,&c);
    for(i=1;i<N;i++){
        scanf("%d%d%d",&x,&y,&z);
        x+=b<c?b:c;
        y+=a<c?a:c;
        z+=a<b?a:b;
        a=x;
        b=y;
        c=z;
        r=a<b?a:b;
    }
    printf("%d",r<c?r:c);
    
    return 0;
}
*/
