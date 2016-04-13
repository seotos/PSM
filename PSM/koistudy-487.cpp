//
//  koistudy-487.cpp
//  PSM
//
//  Created by KimBongSeok on 2014. 12. 19..
//  Copyright (c) 2014년 KimBongSeok. All rights reserved.
//

#include<cstdio>
#include<algorithm>
int n, a[0xffff],k,i;
int main(){
    for(scanf("%d%d",&n,&k);i<n;scanf("%d",a+i++));
    printf("%ld",std::lower_bound(a,a+n,k)-a+1);
}