//
//  1078.cpp
//  PSM
//
//  Created by KimBongSeok on 2015. 11. 7..
//  Copyright © 2015년 KimBongSeok. All rights reserved.
//
/*
#include <stdio.h>
int f(int n){
    if(n/10==0) return 1;
    else return 1+f(n/10);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
 */
#include<stdio.h>
int f(int n){
    if(n==1) return 1;
    else{
        if(n%2==0) return 1+f(n/2);
        else return 1+f(3*n+1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
