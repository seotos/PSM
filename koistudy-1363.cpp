//
//  koistudy-1363.cpp
//  PSM
//
//  Created by on 2016. 7. 5..
//  Copyright © 2016년  kbs All rights reserved.
//
/*
4
1 2 3
3 2 1
3 2 2 3

출력
12

입력2
2
1
1
1 1

출력 
4 

*/
#include <stdio.h>
#include<algorithm>
using namespace std;
int n,d[4][60];
int main(){
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        scanf("%d",&d[0][i]);
        d[0][i]+=d[0][i-1];
    }
    
    for(int i=0;i<n-1;i++)
        scanf("%d",&d[1][i]);
    for(int i=n-1;i>=0;i--)
        d[1][i]+=d[1][i+1];
    for(int i=0;i<n;i++)
        scanf("%d",&d[2][i]);
    for(int i=0;i<n;i++)
        d[3][i]=d[0][i]+d[1][i]+d[2][i];
    sort(d[3],d[3]+n);
    printf("%d",d[3][0]+d[3][1]);
    return 0;
}







