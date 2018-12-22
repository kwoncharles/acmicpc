//
//  hi.cpp
//  MyC++
//
//  Created by Kwoncheol on 01/04/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

// 어린앙자 , 점1과 점2을 품고 있는 원의 개수
#include <cstdio>
int x1,y_1,x2,y2,tc,pln;
int main(){
    scanf("%d", &tc);
    while(tc--){
        int cnt=0;
        scanf("%d %d %d %d %d", &x1,&y_1,&x2,&y2, &pln);
        for(int i=0; i<pln; i++){
            int x, y, r;
            scanf("%d %d %d", &x,&y,&r);
            cnt += ((x1-x)*(x1-x)) + ((y_1-y)*(y_1-y))<r*r ^ ((x2-x)*(x2-x)) + ((y2-y)*(y2-y))<r*r;
        }
        printf("%d\n", cnt);
    }
    return 0;
}

/*
#include<stdio.h>
int x1,y1,x2,y2,n,t,res;
int main(){
    scanf("%d",&t);
    while(t--){
        res=0;
        scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&n);
        for(int i=0; i<n; i++){
            int x,y,r;
            scanf("%d %d %d",&x,&y,&r);
            res+=(x-x1)*(x-x1)+(y-y1)*(y-y1)<r*r ^ (x-x2)*(x-x2)+(y-y2)*(y-y2)<r*r;
        }
        printf("%d\n",res);
    }
    return 0;
}
*/

