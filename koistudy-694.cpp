//
//  koistudy-694.cpp
//  PSM
//
//  Created by KimBongSeok on 2015. 11. 7..
//  Copyright © 2015년 KimBongSeok. All rights reserved.
//

#include<stdio.h>
#define R 1000000007
struct P{
    int cnt,av;
}DT[1100];
int n;

int main(){
    scanf("%d",&n);
    DT[0].cnt=1;
    for(int i=0;i<=n;i++){
        if(DT[i].av==0) {
            DT[i+1].cnt = DT[i].cnt+DT[i].cnt;
            DT[i+2].cnt = DT[i+2].cnt+DT[i].cnt;
            DT[i+2].av = DT[i]
            DT[i+3].cnt =DT[i+3].cnt+DT[i].cnt;
            DT[i+3].av = DT[i].
        }
    }
        

}
