//
//  koistudy-1539.cpp
//  PSM
//
//  Created by KBS on 2016. 7. 4..
//  Copyright © 2016년 KBS. All rights reserved.
//
/*
 1<= N <= 5,000
 1<= a <= 20,000
 입력
4
36
38
40
42
 
 출력
 38 

 */
#include <stdio.h>
int prime[20020]={-1};
void pre(){
    for(int i=2;i*i<=20020;i++){
		if(prime[i]==0) {
			for(int k=2;i*k<=20020;k++)
				prime[i*k]=1;
		}
    }
}
int main(){
    pre();
    int n,max=0,p=0,d[20002];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
		scanf("%d",d+i);
	}
	for(int i=1;i<=n;i++){
		if(max < d[i]){
			for(int k=d[i];k>=max/2;k--){
				if(prime[k]==0 && max < k) {
					if(d[i] %k==0){
						max = k;
						p=d[i];
					}
				}
			}
		}
    }
	printf("%d",p);
	return 0;
}