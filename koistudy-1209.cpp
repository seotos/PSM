//
//  koistudy-1209.cpp
//  PSM
//
//  Created by  on 2016. 7. 8..
//  Copyright © 2016년 kbs. All rights reserved.
//
/*
 입력1
 179
 
 출력1
 1
 
 입력2
 -1
 
 출력2
 9
 
 입력3
 18
 
 출력3 
 10 
*/


#include <stdio.h>
int f(long long int a){
	if(a<0) a = -a;
	while(a){
		if(a%10==8) return 1;
		a=a/10;
	}
	return 0;
}
int main(){
	long long int n,k;
	scanf("%lld",&n);
	for(k=n+1; ; k++){
		if(f(k)) break;
	}
	printf("%lld",k-n);
}






