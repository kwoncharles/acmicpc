#include <cstdio>
int bc[1001][1001];int N,M;
int binomialc(int n, int m){
    if(n == m || m == 0) return 1;
    if(bc[n][m]) return bc[n][m];
    return bc[n][m] = binomialc(n-1,m-1)%10007 + binomialc(n-1,m)%10007;}
int main(){
    scanf("%d %d",&N,&M);
    printf("%d\n",binomialc(N,M)%10007);}
