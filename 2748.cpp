#include <iostream>
#include <cstdio>

long long fibo[95]={0,1,NULL};

long long fbnc(int num){
    if(num==0)
        return 0;
    else if(num==1)
        return 1;
    else if(fibo[num])
        return fibo[num];
    else{
        fibo[num] = fbnc(num-1)+fbnc(num-2);
        return fibo[num];
    }
}
int main(){
    int i;
    scanf("%d",&i);
    printf("%lld",fbnc(i));
    return 0;
}
