//
//  acmicpc-1978.cpp
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
	int n,cnt=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int tmp;
		scanf("%d",&tmp);
		if(pri[tmp]== 0) cnt++;
	}
	printf("%d",cnt);
	return 0;
	
}