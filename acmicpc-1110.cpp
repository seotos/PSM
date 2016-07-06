//
//  acmicpc-1110.cpp
//  PSM
//
//  Created by KimBongSeok on 2016. 7. 6..
//  Copyright © 2016년 kbs. All rights reserved.
//
// 몫과 나머지 연산을 이용한 문제
#include <stdio.h>

int main(){
    int cy=0,n,value;
    scanf("%d",&n);
    value = n;
    do{
       cy++;
        value = (value%10)*10+(value/10+value%10)%10;
    }while(n!=value);
    printf("%d",cy);
    return 0;
}