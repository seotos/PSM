//
//  acmicpc-2167.cpp
//  PSM
//
//  Created by on 2016. 7. 13..
//  Copyright © 2016년 kbs. All rights reserved.
//
/*
2 3
1 2 4
8 16 32
3
 1 1 2 3
 1 2 1 2
 1 3 2 3
3 4
 1 2 3 4
 5 6 7 8 
 9 10 11 12
 1
 
 63
 2
 36
 */

#include <stdio.h>
typedef long long int lli;
int n,m;
lli d[330][330],in[330][330];
struct P{
	int x1,y1,x2,y2;
};
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		for(int k=1;k<=m;k++)
			scanf("%lld",&in[i][k]);
	for(int i=1;i<=n;i++)
		for(int k=1;k<=m;k++)
			d[i][k]=in[i][k]+d[i-1][k]+d[i][k-1]-d[i-1][k-1];
		
	int cnt;
	scanf("%d",&cnt);
	for(int i=1;i<=cnt;i++){
		P tmp;
		scanf("%d%d%d%d",&tmp.y1,&tmp.x1,&tmp.y2,&tmp.x2);
		lli result = d[tmp.y2][tmp.x2]-d[tmp.y2][tmp.x1-1]-d[tmp.y1-1][tmp.x2]+d[tmp.y1-1][tmp.x1-1];
		printf("%lld\n",result);
	}
	return 0;
	
}