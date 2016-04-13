//
//  koistudy-877.cpp
//  PSM
//
//  Created by KimBongSeok on 2015. 11. 7..
//  Copyright © 2015년 KimBongSeok. All rights reserved.
//

#include <stdio.h>
struct P{
    int a,b,num;
}d[110000];
struct S{
    int paint,re;
}ans[110000];
int n,m,cnt;
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
        scanf("%d%d%d",&d[i].a,&d[i].b,&d[i].num);
    for(int i=m;i>0;i--){
        if(cnt == n) break;
        int start=d[i].a,end=d[i].b,num=d[i].num;
        for(int k=start;k<=end;){
            if(ans[k].paint){
                k=ans[k].re+k;
            }
            else{
                ans[k].paint = num;
                ans[k].re =end-k+1;
                cnt++;
                k++;
            }
        }
    }
    for(int i=1;i<=n;i++)
        printf("%d ",ans[i].paint);
    return 0;
}