#include <cstdio>
int bc[11][11];int N,M;
int binomialc(int n, int m){
    if(n == m || m == 0) return 1;
    if(bc[n][m]) return bc[n][m];
    return bc[n][m] = binomialc(n-1,m-1) + binomialc(n-1,m);}
int main(){
    scanf("%d %d",&N,&M);
    printf("%d\n",binomialc(N,M));}
