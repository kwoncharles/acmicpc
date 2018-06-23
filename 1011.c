#include <stdio.h>
#include <math.h>

main(){
    int test_cnt;
    int a,b;
    scanf("%d", &test_cnt);
    
    for(int i=0; i<test_cnt; i++){
        int min;
        int sq;
        scanf("%d %d", &a,&b);
        
        min = b-a;
        
        sq = (int)sqrt((double)min);
        
        if(min > sq*sq+sq)
            printf("%d\n",sq*2+1);
        else if(min > sq*sq)
            printf("%d\n",sq*2);
        else
            printf("%d\n", sq*2-1);
    }
}
