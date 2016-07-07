//
//  acmicpc-2010.cpp
//  PSM
//
//  Copyright © 2016년 kbs. All rights reserved.
//

#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int tmp;
        scanf("%d",&tmp);
        sum+=tmp;
    }
    printf("%d",sum-n+1);
    return 0;

}