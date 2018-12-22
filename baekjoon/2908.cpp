//
//  2908.cpp
//  c++
//
//  Created by Kwoncheol on 23/06/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

#include <cstdio>

char num[2][4];
int i;

int main(){
    scanf("%s %s", num[0],num[1]);
    if(num[0][2] == num[1][2]){
        if(num[0][1] == num[1][1])
            i = num[1][0] > num[0][0];
        else
            i = num[1][1] > num[0][1];
    }
    else
        i = num[1][2] > num[0][2];
    printf("%c%c%c",num[i][2],num[i][1],num[i][0]);
}

/*
 // short coding
 
 int f(int n){
 return (n/100 + n%100/10*10 + n%10*100);
 }
 
 int main(){
 int a,b;
 scanf("%d %d",&a, &b);
 printf("%d",f(a)>f(b)?f(a):f(b));
 }
 
 */
