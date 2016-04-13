//
//  koistudy-1357.cpp
//  PSM
//
//  Created by KimBongSeok on 2015. 10. 9..
//  Copyright © 2015년 KimBongSeok. All rights reserved.
//

#include <stdio.h>
#include<algorithm>
using namespace std;
int n,k,d[110000];
int cmp(int a, int b){
    if(k==1) return a>b;
    else return a<b;
}
int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",d+i);
    sort(d,d+n,cmp);
    for(int i=0;i<n;i++)
        printf("%d ",d[i]);
    return 0;
}