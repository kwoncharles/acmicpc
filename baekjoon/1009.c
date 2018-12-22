#include <stdio.h>
#include <math.h>

int main(){
    int test_cnt;
    int coef,expon;
    scanf("%d", &test_cnt);
    
    for(int i=0; i<test_cnt; i++){
        scanf("%d %d", &coef, &expon);
        
        coef %= 10;
        
        if(coef == 0){
            printf("10\n");
            continue;
        }
        if(expon == 1){
            printf("%d\n", coef);
            continue;
        }
        
        if(coef == 1 || coef == 5 || coef == 6)
            printf("%d",coef);

        else if(coef == 4 || coef == 9){
            if(expon%2 == 0)
                printf("%d",(coef+2)%10);
            else
                printf("%d",coef);
        }
        else{
            expon %= 4;
            if(expon == 0)
                printf("%d", ((int)pow(coef,4))%10);
            else
                printf("%d", ((int)pow(coef,expon))%10);
        }
        printf("\n");
    }
    return 0;
}
