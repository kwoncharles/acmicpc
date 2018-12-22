//
//  1932_dp_num_triangle.cpp
//  c++
//
//  Created by Kwoncheol on 28/04/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <algorithm>

// 내 코드 1안
// 이런 문제는 밑에서 위에 로우를 바라보는 식으로 내려가야 함
// 그래서 2열부터 시작해서 현재값(n) += max(n-1열의 왼쪽값, n-1열의 오른쪽 값)
// 이렇게 현재 row의 값들을 row 1부터 자기까지 올 수 있는 모든 경로에서 최대값으로 만든다
// (말이 어렵지만 코드를 보면 이해 가능..)

#define max(a,b) (a>b) ? (a) : (b)

int main(){
    int n,p=1,a,max=-1;
    int arr[501][501]={0};
    
    scanf("%d%d",&n,&arr[1][1]);
    
    for(int i=2; i<=n;i++){
        while(p<=i){
            scanf("%d",&arr[i][p]);
            a = max(arr[i-1][p-1],arr[i-1][p]);
            arr[i][p] += a;
            if(max < arr[i][p])
                max = arr[i][p];
            p++;
        }
        p=1;
    }
    printf("%d",max);

    return 0;
}

// 내 코드 2안 (하다맘)

/*
#define max(a,b) (a>b) ? (a) : (b)

int main(){
    int n,p=1,a,max=-1;
    int arr[501]={0};
    
    scanf("%d%d",&n,&arr[1]);
    
    for(int i=2; i<=n;i++){
        while(p<=i){
            scanf("%d",&arr[p]);
            a = max(arr[i-1][p-1],arr[i-1][p]);
            arr[i][p] += a;
            if(max < arr[i][p])
                max = arr[i][p];
            p++;
        }
        p=1;
    }
    printf("%d",max);
    
    return 0;
}
*/

// 숏코딩

/*
int t[501]={};
int main(){
    int n,i,j,T;
    for(i=scanf("%d%d",&n,t+1);i<=n;i++){
        for(j=i;j;j--){
            scanf("%d",&T);
            t[j]=t[j]>t[j-1]?t[j]+T:t[j-1]+T;
            for(;n--;){
                j<t[n]?j=t[n]:1;
                printf("%d",j);
                
            }
        }
    }
}
 */
