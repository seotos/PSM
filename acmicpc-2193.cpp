//
//  acmicpc-2193.cpp
//  PSM
//
//  Copyright © 2016년 kbs. All rights reserved.
//

#include <stdio.h>
// i자리의 끝자리가 0인 값의 개수는 [i-1][0]+[i-1][1], 1의 값의 개수는 [i-1][0]
long long int d[100][2];
int main(){
	int n;
	d[1][0]=0, d[1][1]=1;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		d[i][0]=d[i-1][0]+d[i-1][1];
		d[i][1]=d[i-1][0];
	}
	printf("%lld",d[n][0]+d[n][1]);
	return 0;
}