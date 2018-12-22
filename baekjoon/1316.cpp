//
//  1316.cpp
//  c++
//
//  Created by Kwoncheol on 23/06/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

#include <cstdio>
#include <string.h>

int abc[26];
char word[101];
int main(){
    int i,j,cnt=0;
    for(scanf("%d",&i); i>0; i--,cnt++){
        for(j=0; j<26; j++)
            abc[j]=0;
        
        scanf("%s",word);
        for(j=0; j<strlen(word); j++){
            if((word[j]!= word[j+1])){
                if(abc[word[j]-'a'] == -1){
                    cnt--;break;
                }
                abc[word[j]-'a'] = -1;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}
