#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

char str1[1001];
char str2[1001];
int lcs[1001][1001];

int main(){
    scanf("%s %s", str1+1, str2+1);
    str1[0] = str2[0] = ' ';
    
    for(int i=1; i<=strlen(str1)-1; i++){
        for(int j=1; j<=strlen(str2)-1; j++){
            if(str1[i] == str2[j])
                lcs[i][j]= lcs[i-1][j-1] + 1;
            else
                lcs[i][j]= max(lcs[i-1][j], lcs[i][j-1]);
        }
    }
    
    printf("%d",lcs[strlen(str1)-1][strlen(str2)-1]);
}

/*
short coding
 
#define m(x,y) x>y?x:y
int l,k,i,j,d[1001][1001];
char s[1002],a[1002];
main(){
    gets(s+1);
    gets(a+1);
    l=strlen(s+1);
    k=strlen(a+1);
    for(i=1;i<=l;i++)
        for(j=1;j<=k;j++)
            if(s[i]==a[j])
                d[i][j]=d[i-1][j-1]+1;
            else
                d[i][j]=m(d[i][j-1],d[i-1][j]);
    printf("%d",d[l][k]);}
*/
