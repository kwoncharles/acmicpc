//
//  hi.cpp
//  c++
//
//  Created by Kwoncheol on 23/06/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

#include <cstdio>
int abc[26];
char str[101];

int main(){
   
    scanf("%s",str);
    
    for(int i=0; i<101; i++){
        if(!abc[str[i]-97])
            abc[str[i]-97] = i+1;
    }
    
    for(int i=0;i<26; i++)
        printf("%d ", abc[i]-1);

    return 0;
}
