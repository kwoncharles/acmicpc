#include <iostream>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;
/*
 피보나치 수를 k로 나눈 나머지는 항상 주기를 갖는다.(피사노 주기)
 k가 10^n일 때 n>2이라면 k=10x15^(n-1)이다
 */

int main(){
    const int period=1500000;
    long long int num;
    int i=1,fibo[period] = {0,1};
    time_t s, e;
    scanf("%lld",&num);

    num = num%period;
    s = clock();
    while(++i <= num){
        fibo[i] = (fibo[i-1] + fibo[i-2])%1000000;
    }
    e = clock();
    printf("%d\n%ld",fibo[num],s-e/CLOCKS_PER_SEC);
    return 0;
}
