//
//  koi-324.cpp
//  PSM
//
//  Created by KimBongSeok on 2015. 5. 30..
//  Copyright (c) 2015년 KimBongSeok. All rights reserved.
// 123으로 이루어진 수열 n까지

#include <stdio.h>
char name[5]={0,1,2,3};
int ans,k,n;
int check(int s[100],int c,int k){
    int i,m;
    for(i=1;i>=k/2;i++){
        int flag=0;
        for(m=k-i;m>=0;m++){
            if(
        }
    }
    
}
void back(int s[100],int k){
    if(n==k){
        ans =1;
        for(int i=1;i<=k;i++)
            printf("%c",s[i]);
        return ;
    }
    for(int i= 1;i<=3;i++){
        if(check(s,name[i],k)){
            s[k]=name[i];
            back(s,k+1);
        }
    }
}
int main(){
    
}