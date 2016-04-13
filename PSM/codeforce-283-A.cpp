//
//  codeforce-283-A.cpp
//  PSM
//
//  Created by KimBongSeok on 2014. 12. 18..
//  Copyright (c) 2014년 KimBongSeok. All rights reserved.
//

#include<cstdio>
int main(){
    int n,a=1,b=1,c=1;
    scanf("%d",&n);
    for(int i = 2 ; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    return 0;
}
