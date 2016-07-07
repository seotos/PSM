//
//  acmicpc-1463.cpp
//  PSM
//
///  Copyright © 2016년 kbs. All rights reserved.
//

#include <stdio.h>
#define Min(a,b) ((a)<(b)?(a):(b))

int d[1000100],n;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=1000010;i++)
		d[i]=99999;
	d[1]=0;
	for(int i=1;i<=n;i++){
		//n보다 크면 배열 크기 초과
		if(i*3<=n) d[i*3]=Min(d[i*3],d[i]+1);
		if(i*2<=n)d[i*2]=Min(d[i*2],d[i]+1);
		if(i+1<=n)d[i+1]=Min(d[i+1],d[i]+1);
	}
	printf("%d",d[n]);
	return 0;
}