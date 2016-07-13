//
//  acmicpc-1003.cpp
//  PSM
//
//  Created by  on 2016. 7. 12..
//  Copyright © 2016년 kbs. All rights reserved.
//
/*
 3
 0
 1
 3
 
 1 0
 0 1
 1 2
 */
#include <stdio.h>
struct P{
	long long int zero, one;
};
P d[50];
void pre(){
	for(int i=2;i<=40;i++){
		d[i].zero = d[i-1].zero+d[i-2].zero;
		d[i].one = d[i-1].one + d[i-2].one;
	}
}
int main(){
	d[0].zero = 1;
	d[0].one =0;
	d[1].zero = 0;
	d[1].one=1;
	pre();
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int tmp;
		scanf("%d",&tmp);
		printf("%lld %lld\n",d[tmp].zero, d[tmp].one);
	}
	return 0;
}
