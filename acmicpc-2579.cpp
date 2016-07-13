//
//  acmicpc-2579.cpp
//  PSM
//
//  Copyright © 2016년 kbs. All rights reserved.
//

#include <stdio.h>
#define Max(a,b) ((a)>(b)?(a):(b))
long long int d[400][3];

int main(){
	int n;
	scanf("%d",&n);
	int tmp;
	scanf("%d",&tmp);
	d[1][1]=tmp;
	for(int i=2;i<=n;i++){
		scanf("%d",&tmp);
		d[i][1]=Max(d[i-2][1],d[i-2][2])+tmp;
		d[i][2]=d[i-1][1]+tmp;
	}
	printf("%lld",Max(d[n][1],d[n][2]));
	return 0;
}