//
//  koistudy-1473.cpp
//  PSM
//
//  Created by KBS on 2016. 7. 4..
//  Copyright © 2016년 KBS. All rights reserved.
//
/*
 1 2
 1 1
 1 1
 1 2
 
 1
 1
 1
 */
#include <stdio.h>
#define abs(a) ((a)>0?(a):-(a))
struct C{
    int old, after;
}d[4];
int main(){
    for(int i=0;i<4;i++){
        scanf("%d%d",&d[i].old,&d[i].after);
    }
    int gap[5]={};
    int tmp=0;
    for(int i=3;i>=0;i--){
        gap[i]=abs((d[i].after+tmp)-d[i].old);
        tmp=gap[i];
    }
    for(int i=1;i<=3;i++)
        printf("%d\n",gap[i]);
    return 0;
}