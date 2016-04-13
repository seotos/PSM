//
//  codeforce-339A.cpp
//  PSM
//
//  Created by KimBongSeok on 2015. 11. 8..
//  Copyright © 2015년 KimBongSeok. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
char d[120];
int ans[100],cnt;
int cmp(int a, int b){
    return a<b;
}
int main(){
    scanf("%s",d);
    for(int i=0;d[i];i++){
        if(d[i]!='+') ans[cnt++]=d[i]-'0';
    }
    sort(ans,ans+cnt,cmp);
    for(int i=0;i<cnt;i++){
        printf("%d",ans[i]);
        if(i<cnt-1) printf("+");
        
    }
    return 0;
}