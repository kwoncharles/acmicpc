#include <cstdio>
int op[100001], stack[100001], tmp, n, i, imax;

int main(){
    for(scanf("%d", &n); i<n; i++){
        scanf("%d", &tmp);
        if(tmp > imax){
            op[i] = tmp - imax;
            imax = tmp;
        }
        else{
            for(int j=tmp+1; j<imax; j++){
                if(stack[j] != 1){
                    printf("NO");
                    return 0;
                }
            }
            op[i] = -1;
        }
        stack[tmp] = 1;
    }
    
    for(i=0; i<n; i++){
        if(op[i] > 0){
            for(int j=0; j<op[i]; j++)
                printf("+\n");
            printf("-\n");
        }
        else{
            for(int j=0; j<-op[i]; j++)
                printf("-\n");
        }
    }
}

//short coding
/*
#include <iostream>
#include <stack>
using namespace std;

int main(){
    int k,n=1,c=0,t;
    char b[200001];
    stack<int>s;
    cin>>k;
    while(c<2*k){
        cin>>t;
        while(n<=t)
            s.push(n++),b[c++]='+';
        if(t!=s.top()){
            cout<<"NO";
            return 0;
        }
        b[c++]='-',s.pop();
    }
    for(int i=0; i<c; i++)
        cout<<b[i]<<"\n";
}
 */
