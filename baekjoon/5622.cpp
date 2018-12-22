//
//  5622.cpp
//  c++
//
//  Created by Kwoncheol on 24/06/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

#include <cstdio>
#include <string.h>

char n[15];
int s,i;
int main(){
    for(scanf("%s",n); i<strlen(n); i++){
        s += (n[i]-'A')/3 + 3;
        if(((n[i]-'A')%3 == 0 && n[i]>'R') || n[i] == 'Z')
            s -= 1;
    }
    printf("%d\n", s);
}
