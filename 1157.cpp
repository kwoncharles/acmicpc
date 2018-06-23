//
//  1157.cpp
//  c++
//
//  Created by Kwoncheol on 23/06/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

#include <cstdio>
#include <iostream>

using namespace std;

int abc[26], midx=0, scd=25;
string str;
int main(){
    getline(cin,str);
    
    for(int i=0; i<str.length(); i++){
        if(str[i]>95)
            abc[str[i]-97]++;
        else
            abc[str[i]-65]++;
    }
    
    for(int i=1; i<26; i++){
        if(abc[midx] <= abc[i]){
            scd=midx;midx=i;
        }
    }
    
    if(abc[scd]==abc[midx])
        printf("?");
    else
        printf("%c",midx+65);
    
    return 0;
}
