//
//  1152.cpp
//  c++
//
//  Created by Kwoncheol on 24/06/2018.
//  Copyright © 2018 Kwoncheol. All rights reserved.
//

#include <cstdio>
#include <iostream>

using namespace std;

int num=0;
string str;

int main(){
    getline(cin,str);
    for(int i=0;i<str.length(); i++){
        if(str[i] == ' ')
            num++;
    }
    if(str[0] == ' '&&str.length()>0)
        num--;
    if(str[str.length()-1]==' ')
        num--;
    printf("%d",num+1);
}

//short coding
/*
#include <cstdio>
int a;int main(){while(~scanf("%*s"))a++;printf("%d",a);}
*/
