//
//  koistudy-1061.cpp
//  PSM
//
//  Created by KimBongSeok on 2015. 12. 10..
//  Copyright © 2015년 KimBongSeok. All rights reserved.
//

#include <stdio.h>
#define R 1000000007

long long int d[10010][3];
int main(){
    /*
    int n;
    scanf("%d",&n);
    d[0][0]=1;
    for(int i=1;i<=n;i++){
        if(i-1>=0) {
            d[i][0]+=(d[i-1][0]+d[i-1][1])%R;
            d[i][1]+=d[i-1][2];
        }
        if(i-2>=0){
            d[i][0]+=(d[i-2][0]+d[i-2][1])%R;
            d[i][1]+=d[i-2][2]%R;
        }
        if(i-3>=0){
            d[i][2]=d[i-3][0];
        }
    }
    printf("%lld",((d[n][0]+d[n][1])%R+d[n][2])%R);
     return 0;
     */
    int sum=0;
    for(int i=1 ;i <=99; i++)
        if(i%2==0) sum+=i;
    printf("%d",sum);
}