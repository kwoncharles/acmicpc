#include <cstdio>
#include <iostream>

/*
 n번째 피보나치에서 0이 불린 횟수는 n-1피보나치에서 1이 불린 횟수,
               1이 불린 횟수는 n-1피보나치에서 0이 불린 횟수 + 1이 불린 횟수
 */
long long int zero=1,one=2;

int main(){
    int tc=0;
    scanf("%d",&tc);
    while(tc-->0){
        long long int fn,temp;
        int i=3;
        scanf("%lld",&fn);
        if(fn==0){
            zero=1;one=0;
        }
        else if(fn==1){
            zero=0;one=1;
        }
        else if(fn==2){
            zero=1;one=1;
        }
        else{
            while(i++<fn){
                temp = zero + one ;
                zero = one;
                one = temp;
            }
        }
        printf("%lld %lld\n",zero,one);
        zero=1;one=2;
    }
}

//main(n,a,b){for(gets(&n);a=scanf("%d",&n)>0;printf("%d %d\n",a,b))for(b=0;n--;a=b-a)b+=a;}
/*


int zero=0,one=0;
int fibonacci(int n) {
    if (n == 0) {
        zero++;
        return 0;
    } else if (n == 1) {
        one++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int tc,n;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        fibonacci(n);
        printf("%d %d\n", zero,one);
        zero=0;one=0;
    }
}
*/
