//
//  acmicpc-1929.cpp
//  PSM
//
//  Copyright © 2016년 kbs. All rights reserved.
//


#include <stdio.h>
int pri[1010000]={-1,-1};
int main(){
	for(int i=2;i*i<=1000010;i++){
		if(pri[i]==0){
			for(int k=2;i*k<=1000010;k++){
				pri[i*k]=-1;
			}
		}
	}
	int n,m;
	scanf("%d%d",&m,&n);
	for(;m<=n;m++){
		if(pri[m]== 0) printf("%d\n",m);
	}
	return 0;
	
}
