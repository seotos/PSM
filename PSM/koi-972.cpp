//
//  koi-972.cpp
//  PSM
//
//  Created by KimBongSeok on 2015. 5. 30..
//  Copyright (c) 2015년 KimBongSeok. All rights reserved.
//

#include<stdio.h>
int abs(int x1){
    return x1>0? x1:-x1;
}
int main(){
    int x[3],y[3];
    for(int i=0;i<3;i++)
        scanf("%d%d",x+i,y+i);
    if(x[0]==x[2] && y[0]==y[2]) printf("0\n");
    else if(x[0]==x[2] || y[0]==y[2]) printf("1\n");
    else printf("%d\n",(abs(x[0]-x[2])==abs(y[0]-y[2]))?1:2);
    printf("%d",(x[1]!=x[2])+(y[1]!=y[2]));
    return 0;
}
/*
2 1
2 1
4 3
*/