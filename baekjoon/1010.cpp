#include <cstdio>

int main(){ int n,m,tc;
    scanf("%d",&tc);
    while(tc--){
        int sum=1;
        scanf("%d %d",&n,&m);
        for(int i=0; i<n; i++)
            sum = sum * (m-i) / (i+1);
        printf("%d\n",sum);}}
