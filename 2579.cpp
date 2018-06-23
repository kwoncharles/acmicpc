//
//  2579_dp_climbsteps.cpp
//  c++
//
//  Created by Kwoncheol on 29/04/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

#include <cstdio>
#include <iostream>

int main(){
    int n,i=1,score,max=0,a=0,b=0,idx=0;
    
    for(scanf("%d",&n);i<=n; i++){
        scanf("%d",&score);
        if(idx==2){
            if(i==n)
                max+=(a>b)?-b+score:-a+score;
            if(max<max-a+score)
                max+=-a+score;
            else if(b>=score){
                
                idx=0;a=b;b=score;}
            else{
                idx--;max+=-b+score;}
        }
        else{
            max+=score;
            a=b;b=score;
            idx++;
        }
    }
    printf("%d",max);
    
    return 0;
}
