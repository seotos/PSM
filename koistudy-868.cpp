//
//  koistudy-868.cpp
//  PSM
//
//  Created by KimBongSeok on 2015. 11. 7..
//  Copyright © 2015년 KimBongSeok. All rights reserved.
//
#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
char ans[110000];
int cmp(char a, char b){
    return a>b;
}
int xi[10],d,ma=0;
int main(){
    /*
    scanf("%d",&d);
    for(int i=1;i<10;i++){
        scanf("%d",xi+i);
        if(ma<d/xi[i]) ma = d/xi[i];
    }
    for(int i=1;i<=ma;i++){
        
    }
    sort(ans,ans+ma,cmp);
    if(ma)
        printf("%s",ans);
    else printf("-1");
    return 0;
     */
    for(int i=1 ;i <=100; i++)
        printf("%d ",i);
}