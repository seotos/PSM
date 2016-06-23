//
//  acmicpc-1149.cpp
//  PSM
//
//  Created by KimBongSeok on 2016. 6. 19..
//  Copyright © 2016년 KimBongSeok. All rights reserved.
//

#include <stdio.h>
int n;
long long int dp[1100][4];
struct rgb{
    int r,g,b;
}data[1100];
#define Min(a,b) ((a)>(b)?(b):(a))
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d%d%d",&data[i].r,&data[i].g,&data[i].b);
    dp[1][1]=data[1].r,dp[1][2] = data[1].g,dp[1][3]=data[1].b;
    for(int i=2;i<=n;i++){
        dp[i][1]=Min(dp[i-1][2],dp[i-1][3])+data[i].r;
        dp[i][2]=Min(dp[i-1][1],dp[i-1][3])+data[i].g;
        dp[i][3]=Min(dp[i-1][1],dp[i-1][2])+data[i].b;
    }
    long long int ans=dp[n][1];
    ans = Min(Min(dp[n][2],dp[n][3]),ans);
    printf("%lld",ans);
    return 0;
}