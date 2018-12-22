#include <cstdio>
#include <cstring>

int n, i, idx;
char c[50];

int main() {
    for(scanf("%d",&n), idx=0; i<n; i++){
        scanf("%s", c);

        idx = 0;
        for(int j=0; c[j]; j++){
            if(c[j] == '(')
                idx++;
            else if(c[j] == ')') {
                idx--;
                if(idx<0)
                    break;
            }
        }
        printf("%s\n", (idx ? "NO" : "YES"));
    }
}

//short coding
/*
#include <cstdio>
int n,c,i;
char s[55];
int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%s",s);
        for(i=c=0;s[i]&&c>=0;i++)
            s[i]=='('?c++:c--;
        puts(c?"NO":"YES");

    }
    return 0;
}
 */
